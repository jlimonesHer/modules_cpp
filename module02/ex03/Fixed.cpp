/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:58:42 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/12 20:00:21 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->_valuePointer = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const int valueFixed)
{
    this->_valuePointer = valueFixed << _fracBits;
}

Fixed::Fixed(const float valueFloat)
{
	_valuePointer = roundf(valueFloat * (1 << _fracBits));
}

Fixed::Fixed(Fixed const &copy)
{
    *this = copy;
}

float Fixed::toFloat(void) const
{
	return _valuePointer / (float)(1 << _fracBits);
}

float Fixed::toInt(void) const
{
	return _valuePointer >> _fracBits;
}

int Fixed::getRawBits(void)  const{
	return (_valuePointer);
}

void Fixed::setRawBits(int const raw){
	_valuePointer = raw;
}

/* Sobrecarga de operadores de comparacion*/

/**
 * @brief sobrecarga de operador "="
 * 
 * @param copy referencia al objeto
 * @return Fixed& 
 */
Fixed	&Fixed::operator=(const Fixed &copy)
{
    _valuePointer = copy.getRawBits();
    return *this;
}

/**
 * @brief sobrecarga de operador "<<"
 * 
 * @param out La variable std::ostream &out es una referencia 
 * a un objeto de la clase std::ostream, que representa un flujo de salida.
 * @param fixed objeto del tipo fixed.
 * @return std::ostream& 
 */
std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

bool Fixed::operator>(const Fixed &number) const
{
    if (this->_valuePointer > number.getRawBits())
        return true;
    return false;
}

bool Fixed::operator<(const Fixed &number) const
{
    if (this->_valuePointer < number.getRawBits())
        return true;
    return false;
}

bool Fixed::operator<=(const Fixed &number) const
{
    if (this->_valuePointer <= number.getRawBits())
        return true;
    return false;
}

bool Fixed::operator>=(const Fixed &number) const
{
    if (this->_valuePointer >= number.getRawBits())
        return true;
    return false;
}

bool Fixed::operator==(const Fixed &number) const
{
    if (this->_valuePointer == number.getRawBits())
        return true;
    return false;
}

bool Fixed::operator!=(const Fixed &number) const
{
    if (this->_valuePointer != number.getRawBits())
        return true;
    return false;
}

/* Sobrecarga de operadores aritmeticos */

Fixed Fixed::operator+(const Fixed &number)
{
    Fixed a = *this;
    a.setRawBits(number.getRawBits() + this->getRawBits());
    return (a);
}

Fixed Fixed::operator-(const Fixed &number)
{
    Fixed a = *this;
    a.setRawBits(number.getRawBits() - this->getRawBits());
    return (a);
}

Fixed Fixed::operator*(const Fixed &number)
{
    Fixed a = *this;
    a.setRawBits(number.toFloat() * this->getRawBits());
    return (a);
}

Fixed Fixed::operator/(Fixed const &number)
{
    Fixed a = *this;
    a.setRawBits(this->getRawBits() / number.toFloat());
    return (a);
}

/* Sobrecarga de operadores de incremento y decremento */

Fixed Fixed::operator++( int )
{
    Fixed tmp = *this;
    this->_valuePointer++;
    return tmp;
}

Fixed Fixed::operator++ ( void )
{
    this->_valuePointer++;
    return (*this);
}

Fixed Fixed::operator--( int )
{
    Fixed tmp = *this;
    this->_valuePointer--;
    return tmp;
}

Fixed Fixed::operator--( void )
{
    this->_valuePointer--;
    return (*this);
}

Fixed Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return a;
    return b;
}

Fixed Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return a;
    return b;
}