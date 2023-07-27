/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:07:11 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/27 19:09:59 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(Animal const &copy)
{
   std::cout << "Animal copy constructor" << std::endl;
	if (this != &copy)
		this->_type = copy.getType();
}

Animal	&Animal::operator=(const Animal &copy)
{
    std::cout << "Animal assignment operator called" << std::endl;
	if (this != &copy)
		this->_type = copy.getType();
	return (*this);
}

std::string Animal::getType() const
{
    return this->_type;
}

void Animal::makeSound( void ) const
{
    if (_type == "Dog")
        std::cout << "Guau, Guau" << std::endl;
    if (_type == "Cat")
        std::cout << "Miau, Miau" << std::endl;
}