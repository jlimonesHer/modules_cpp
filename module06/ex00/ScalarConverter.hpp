/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:55:25 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/30 19:17:31 by jlimones         ###   ########.fr       */
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
        static std::string str;
        static bool possible[4];
        static char    cValue;
        static int     iValue;
        static float   fValue;
        static double  dValue;
        static int     type;
        ScalarConverter();
    public:
        ~ScalarConverter();
        ScalarConverter(ScalarConverter const &copy);
        ScalarConverter	&operator=(ScalarConverter const &copy);
        static int parserChars( std::string &str );
        static void parserDigit( std::string &str );
        static void parse( std::string &str );
        static void cast( void );
        static void display( void );
        static void convert(std::string str);
};

#endif
