/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:53:07 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/10 17:41:54 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(Ice const &copy)
{
    *this = copy;
}

Ice	&Ice::operator=(const Ice &copy)
{
       type = copy.getType();
    return (*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shotts an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const
{
	return new Ice();
}