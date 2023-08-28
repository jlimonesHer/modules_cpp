/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:55:25 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/28 11:13:44 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

# include <iostream>

# define TCHAR 0
# define TINT 1
# define TFLOAT 2
# define TDOUBLE 3
# define INDEF 4

class ScalarConverter
{
    private:
        std::string str;
        bool possible[4];
        char    cValue;
        int     iValue;
        float   fValue;
        double  dValue;
        int     type;
    public:
        ScalarConverter();
        ScalarConverter(std::string _str);
        ~ScalarConverter();
        ScalarConverter(ScalarConverter const &copy);
        ScalarConverter	&operator=(ScalarConverter const &copy);
        int parserChars( void );
        void parserDigit( void );
        void parse( void );
        void cast( void );
        void display(void);
};

#endif
