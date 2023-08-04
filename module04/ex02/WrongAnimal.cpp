/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:32:02 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/27 18:32:53 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}


WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}


WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
    std::cout << "WrongAnimal copy constructor" << std::endl;
    *this = copy;
}


WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &copy)
{
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    this->_type = copy._type;
    return (*this);
}

std::string WrongAnimal::getType() const
{
    return this->_type;
}

void WrongAnimal::makeSound( void ) const
{
    if (_type == "WrongCat")
        std::cout << "WrongCat Sound" << std::endl;
    else
        std::cout << "Wrond Animal Sound" << std::endl;
}