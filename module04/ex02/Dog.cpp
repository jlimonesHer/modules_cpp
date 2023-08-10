/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:09:50 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/10 19:05:15 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
    std::cout << "Dog constructor called" << std::endl;
    this->_type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(Dog const &copy)
{
    std::cout << "Dog copy constructor" << std::endl;
    if (this != &copy)
        this->_type = copy.getType();
}

Dog	&Dog::operator=(const Dog &copy)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &copy)
        this->_type = copy.getType();
    return (*this);
}

std::string Dog::getType() const
{
    return this->_type;
}


void Dog::makeSound( void ) const
{
        std::cout << "Guau, Guau" << std::endl;
}