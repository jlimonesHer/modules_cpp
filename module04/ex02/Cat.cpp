/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:14:46 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/10 19:03:32 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal()
{
    std::cout << "Cat constructor called" << std::endl;
    this->_type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(Cat const &copy)
{
    std::cout << "Cat copy constructor" << std::endl;
    if (this != &copy)
        this->_type = copy.getType();
}

Cat	&Cat::operator=(const Cat &copy)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &copy)
        this->_type = copy.getType();
    return (*this);
}

std::string Cat::getType() const
{
    return this->_type;
}

void Cat::makeSound( void ) const
{
        std::cout << "Miau, Miau" << std::endl;
}