/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:05:09 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/27 18:33:23 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal()
{
    std::cout << "WrongCat constructor called" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy)
{
    std::cout << "WrongCat copy constructor" << std::endl;
    if (this != &copy)
        this->_type = copy.getType();
}

WrongCat	&WrongCat::operator=(const WrongCat &copy)
{
    std::cout << "WrongCat assignment operator called" << std::endl;
    if (this != &copy)
        this->_type = copy.getType();
    return (*this);
}

std::string WrongCat::getType() const
{
    return this->_type;
}