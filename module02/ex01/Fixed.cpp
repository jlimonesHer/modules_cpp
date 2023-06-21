/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:58:42 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/21 13:36:52 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_valueFixed = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
    std::cout << "Assignation operator called" << std::endl;
    _valueFixed = copy.getRawBits();
    return *this;
    
}

int Fixed::getRawBits(void)  const{
    std::cout << "getRawBits member function called\n";
	return (_valueFixed);
}
void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called\n";
	_valueFixed = raw;
}