/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:58:42 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/21 18:31:22 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_valuePointer = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int valueFixed)
{
    std::cout << "Int constructor called" << std::endl;
    this->_valuePointer = valueFixed << _fracBits;
}

Fixed::Fixed(const float valueFloat)
{
    std::cout << "Float constructor called\n";
	_valuePointer = roundf(valueFloat * (1 << _fracBits));
}

Fixed::Fixed(Fixed const &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

float Fixed::toFloat(void) const
{
    std::cout << "toFloat called\n";
	return _valuePointer / (1 << _fracBits);
}

float Fixed::toInt(void) const
{
    std::cout << "toInt called\n";
	return _valuePointer >> _fracBits;
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
    std::cout << "Assignation operator called" << std::endl;
    _valuePointer = copy.getRawBits();
    return *this;
    
}

int Fixed::getRawBits(void)  const{
    std::cout << "getRawBits member function called\n";
	return (_valuePointer);
}
void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called\n";
	_valuePointer = raw;
}