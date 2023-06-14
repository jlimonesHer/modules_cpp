/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:00:28 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/14 18:22:35 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string attack)
{
    std::cout << attack << std::endl;
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType(){
    return ();
}
void setType(std::string type){}
