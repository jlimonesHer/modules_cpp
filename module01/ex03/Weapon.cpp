/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:00:28 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/15 15:44:08 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

Weapon::Weapon( std::string type )
{
	_type = type;
}

const std::string &Weapon::getType()const{
    return (_type);
}

void Weapon::setType( std::string type ){
    _type = type;
}

