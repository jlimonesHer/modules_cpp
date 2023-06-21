/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:58:15 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/21 18:25:41 by jlimones         ###   ########.fr       */
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

        Fixed	&operator=(Fixed const &copy);
        float toFloat(void) const;
        float toInt(void) const;
        int getRawBits(void)  const;
        void setRawBits(int const raw);
};

#endif
