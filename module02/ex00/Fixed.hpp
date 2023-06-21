/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:58:15 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/21 15:30:03 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int _valuePointer;
        static const int _fracBits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(Fixed const &copy);
        Fixed	&operator=(Fixed const &copy);

        int getRawBits(void)  const;
        void setRawBits(int const raw);
};

#endif
