/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:36:46 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/30 19:31:14 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

char ScalarConverter::cValue = 0;
int ScalarConverter::iValue = 0;
float ScalarConverter::fValue = 0;
double ScalarConverter::dValue = 0.0;
int ScalarConverter::type = 4;
bool ScalarConverter::possible[4] = {true, true, true, true};

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

int ScalarConverter::parserChars( std::string &str ) {
    int len = str.length();
    
    if ((len == 1 && !std::isdigit(str[0]))) {
        type = TCHAR;
        possible[0] = true;
        cValue = str[0];
    } else if (str == "-inff" || str == "+inff" || str == "nanf") {
        type = TFLOAT;
		fValue = std::atof(str.c_str());
        dValue = fValue;
        possible[TINT] = false;
		possible[TFLOAT] = true;
        possible[TDOUBLE] = true;
    } else if (str == "-inf" || str == "+inf" || str == "nan") {
        type = TDOUBLE;
		fValue = std::atof(str.c_str());
        dValue = fValue;
        possible[TINT] = false;
		possible[TFLOAT] = true;
        possible[TDOUBLE] = true;
    }
    else
        return 0;
    return 1;
}

void ScalarConverter::parserDigit( std::string &str ) {
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

void ScalarConverter::parse( std::string &str ) {
    if (parserChars(str))
        return ;
    parserDigit(str);
    if (type == TINT)
    {
        long long tmpI = std::atol(str.c_str());
        if (str.length() > 10 ||
            (tmpI > std::numeric_limits<int>::max() || 
            tmpI < std::numeric_limits<int>::lowest())) {
                possible[TINT] = false;
                dValue = std::atof(str.c_str());
        } else {
            iValue = tmpI;
        }
    } else if (type == TFLOAT) {
        double tmpD = std::atof(str.c_str());
        if (tmpD > std::numeric_limits<float>::max()
			|| tmpD < std::numeric_limits<float>::lowest()) {
			possible[TFLOAT] = false;
            dValue = std::atof(str.c_str());
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
		fValue = static_cast<float>(possible[TINT] ? iValue : dValue);
		dValue = static_cast<double>(possible[TINT] ? iValue : dValue);
		if (dValue > std::numeric_limits<int>::max()
			|| dValue < std::numeric_limits<int>::lowest()) {
                possible[TINT] = false;
                possible[TFLOAT] = false;
                possible[TDOUBLE] = false;
            }
    } else if (type == TFLOAT) {
    	cValue = static_cast<char>(fValue);
		iValue = static_cast<int>(possible[TFLOAT] ? fValue : dValue);
		dValue = static_cast<double>(possible[TFLOAT] ? fValue : dValue);
    } else if (type == TDOUBLE) {
        cValue = static_cast<char>(dValue);
		iValue = static_cast<int>(dValue);
		if (dValue > std::numeric_limits<int>::max()
			|| dValue < std::numeric_limits<int>::lowest())
			possible[TINT] = false;
		fValue = static_cast<float>(dValue);
		if (dValue > std::numeric_limits<float>::max()
			|| dValue < std::numeric_limits<float>::lowest())
			possible[TFLOAT] = false;
    }
}

void ScalarConverter::display( void ) {
    if (possible[TCHAR] == false) {
        std::cout << "char: Non displayable" << std::endl;
    } else if (iValue < 32 || iValue > 127){
        std::cout << "char: " << "impossible" << std::endl;
    } else if (possible[TINT] == true) {
        std::cout << "char: " << cValue << std::endl;
    }
    if (possible[TINT] == true) {
        std::cout << "int: " << iValue << std::endl;
    } else {
        std::cout << "int: " << "impossible"  << std::endl;
    }
    if (possible[TFLOAT] == true) {
        if (std::abs(dValue - iValue) < 0.0001) {
        std::cout << "float: " << fValue << ".0" << "f" << std::endl;
        } else {
        std::cout << "float: " << fValue << "f" << std::endl;
        }
    } else {
        std::cout << "float: " << "impossible"  << std::endl;
    }
    if (possible[TDOUBLE] == true) {
        if (std::abs(dValue - iValue) < 0.0001) {
            std::cout << "double: " << dValue << ".0" << std::endl;
        } else {
            std::cout << "double: " << dValue << std::endl;
        }
    } else {
        std::cout << "double: " << "impossible" << std::endl;
    }
}

void ScalarConverter::convert(std::string str) {
    parse(str);
    cast();
    display();
}