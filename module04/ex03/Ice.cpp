/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:53:07 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/04 17:06:22 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
    std::cout << "Constructor Ice called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Destructor Ice called" << std::endl;
}

Ice::Ice(Ice const &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Ice	&Ice::operator=(const Ice &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
       _type = copy.getType();
    return (*this);
}
