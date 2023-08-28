/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:36:46 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/28 10:58:54 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(std::string _str): str(_str), cValue(0),
    iValue(0), fValue(0), dValue(0), type(-1) {
    for (int i = 0;i <= INDEF;i++)
        possible[i] = true;
    parse();
    cast();
    display();
}

ScalarConverter::~ScalarConverter() {
}

ScalarConverter::ScalarConverter(ScalarConverter const &copy) {
    if (this != &copy)
        *this = copy;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &copy)
{
     if (this != &copy)
        *this = copy;
    return *this;
}

int ScalarConverter::parserChars( void ) {
    int len = str.length();
    
    if ((len == 1 && !std::isdigit(str[0])) || (len == 3 && str[0] == '\'' &&
         str[2] == '\'')) {
        type = TCHAR;
        possible[0] = true;
        cValue = str[0];
    } else if (str == "-inff" || str == "+inff" || str == "nanf") {
        type = 2;
		fValue = std::atof(str.c_str());
        dValue = fValue;
		possible[TFLOAT] = true;
        possible[TDOUBLE] = true;
    } else if (str == "-inf" || str == "+inf" || str == "nan") {
        type = 2;
		fValue = std::atof(str.c_str());
        dValue = fValue;
		possible[TFLOAT] = true;
        possible[TDOUBLE] = true;
    }
    else
        return 0;
    display();
    return 1;
}

void ScalarConverter::parserDigit( void ) {
    int len = str.length();
    int i= 0;
    type = TINT;
    possible[TINT] = true;
    if (len > 1 && (str[0] == '+' || str[0] == '-'))
        i++;
    while (i < len) {
        if (str[i] == '.' && type == TINT) {
            type = TDOUBLE;
            i++;

        }
        if (str[i] == 'f' && i == len - 1 && type == TDOUBLE) {
            type = TFLOAT;
            return ;
        }
        if (str[i] == 'e' && i < len - 1) {
            i++;
            type = TDOUBLE;
            if (str[i] == '+' || str[i] == '-')
				i++;
        }
        if (i < len && !std::isdigit(str[i])) {
            type = INDEF;
            return ;
        }
        i++;
    }
}

void ScalarConverter::parse( void ) {
    if (parserChars())
        return ;
    parserDigit();
    if (type == TINT)
    {
        long tmpI = std::atol(str.c_str());
        if (tmpI > std::numeric_limits<int>::max() || 
            tmpI < std::numeric_limits<int>::min()) {
                possible[TINT] = false;
        } else {
            iValue = tmpI;
        }
    } else if (type == TFLOAT) {
        double tmpD = std::atof(str.c_str());
        if (tmpD > std::numeric_limits<float>::max()
			|| tmpD < std::numeric_limits<float>::min()) {
			possible[TFLOAT] = false;
        } else {
            fValue = tmpD;
        }
    } else if (type == TDOUBLE) {
        dValue = std::atof(str.c_str());
    }
}

void ScalarConverter::cast() {
    if (type == INDEF) {
        possible[TINT] = false;
        possible[TCHAR] = false;
        possible[TDOUBLE] = false;
        possible[TFLOAT] = false;
        return ;
    } else if (type == TCHAR) {
        iValue = static_cast<int>(cValue);
        fValue = static_cast<float>(cValue);
        dValue = static_cast<double>(cValue);
    } else if (type == TINT) {
        cValue = static_cast<char>(iValue);
		fValue = static_cast<float>(iValue);
		dValue = static_cast<double>(iValue);
    } else if (type == TFLOAT) {
    	cValue = static_cast<char>(fValue);
		iValue = static_cast<int>(fValue);
		if (fValue > std::numeric_limits<int>::max()
			|| fValue < std::numeric_limits<int>::min()) {
			possible[TINT] = false;
        }
		dValue = static_cast<double>(fValue);
    } else if (type == TDOUBLE) {
        cValue = static_cast<char>(dValue);
		iValue = static_cast<int>(dValue);
		if (dValue > std::numeric_limits<int>::max()
			|| dValue < std::numeric_limits<int>::min())
			possible[TINT] = false;
		fValue = static_cast<float>(dValue);
		if (dValue > std::numeric_limits<float>::max()
			|| dValue < std::numeric_limits<float>::min())
			possible[TFLOAT] = false;

    }
}

void ScalarConverter::display() {
    if (possible[TCHAR] == false || iValue < 32 || iValue > 127) {
        std::cout << "char: " << "character not printable or does not exist" << std::endl;
    } else if (possible[TINT] == true) {
        std::cout << "char: " << this->cValue << std::endl;
    }
    if (possible[TINT] == true) {
        std::cout << "int: " << this->iValue << std::endl;
    } else {
        std::cout << "int: " << "impossible"  << std::endl;
    }
    if (possible[TFLOAT] == true) {
        if (fValue - iValue == 0) {
        std::cout << "float: " << this->fValue << ".0" << "f" << std::endl;
        } else {
        std::cout << "float: " << this->fValue << "f" << std::endl;
        }
    } else {
        std::cout << "float: " << "impossible"  << std::endl;
    }
    if (possible[TDOUBLE] == true) {
        if (dValue -iValue == 0) {
        std::cout << "double: " << this->dValue << ".0" << std::endl;
    } else {
        std::cout << "double: " << this->dValue << std::endl;
    }
    } else {std::cout << "double: " << "impossible" << std::endl;
    }
}