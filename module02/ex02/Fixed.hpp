/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:58:15 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/23 08:18:44 by jlimones         ###   ########.fr       */
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
};

std::ostream &operator<<(std::ostream &out, const Fixed &fx);

#endif
