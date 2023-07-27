/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:09:50 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/27 18:33:05 by jlimones         ###   ########.fr       */
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
