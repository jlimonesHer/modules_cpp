/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:19:50 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/10 17:38:00 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const& type): type(type)
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(AMateria const &copy)
{
    *this = copy;
}

AMateria	&AMateria::operator=(const AMateria &copy)
{
    type = copy.getType();
    return (*this);
}

/*****getters & setters***/

std::string const &AMateria::getType() const
{
    return(type);
}
