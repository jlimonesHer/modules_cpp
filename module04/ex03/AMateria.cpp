/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:19:50 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/04 17:08:13 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const& type): _type(type)
{
    std::cout << "Constructor AMateria called" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "Destructor AMateria called" << std::endl;
}

AMateria::AMateria(AMateria const &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

AMateria	&AMateria::operator=(const AMateria &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    _type = copy.getType();
    return (*this);
}

/*****getters & setters***/

std::string const &AMateria::getType() const
{
    return(_type);
}
