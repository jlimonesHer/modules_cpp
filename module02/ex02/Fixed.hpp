/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:58:15 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/12 17:55:31 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int _valuePointer;
        static const int _fracBits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const int valueFixed);
        Fixed(const float valueFloat);
        Fixed(Fixed const &copy);

        float toFloat(void) const;
        float toInt(void) const;
        int getRawBits(void)  const;
        void setRawBits(int const raw);
        
        Fixed	&operator=(Fixed const &copy);
        bool operator>(const Fixed &number) const;
        bool operator<(const Fixed &number) const;
        bool operator<=(const Fixed &number) const;
        bool operator>=(const Fixed &number) const;
        bool operator==(const Fixed &number) const;
        bool operator!=(const Fixed &number) const;
        Fixed operator+(const Fixed &number);
        Fixed operator-(const Fixed &number);
        Fixed operator*(const Fixed &number);
        Fixed operator/(Fixed const &number);
        Fixed operator++( int );
        Fixed operator++( void );
        Fixed operator--( int );
        Fixed operator--( void );
        static Fixed min(Fixed const a, Fixed const b);
        static Fixed max(Fixed const a, Fixed const b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fx);

#endif
