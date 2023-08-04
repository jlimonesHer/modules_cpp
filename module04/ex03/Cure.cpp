/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:54:14 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/04 17:05:58 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
    std::cout << "Constructor Cure called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Destructor Cure called" << std::endl;
}

Cure::Cure(Cure const &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Cure	&Cure::operator=(const Cure &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    _type = copy.getType();
    return (*this);
}
