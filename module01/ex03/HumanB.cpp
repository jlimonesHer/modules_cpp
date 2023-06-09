/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:06:22 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/20 12:48:28 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ):_name(name){
    this->_weapon = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::attack(){
    std::string weapon;

    if (_weapon == NULL || _weapon->getType() == ""){
    std::cout << BLUE << _name 
              << YELLOW << " attacks with their "
              << RED << "no weapon"
              << NO_COLOR << std::endl;
    }
    else{
    std::cout << BLUE << _name 
              << YELLOW << " attacks with their "
              << RED << _weapon->getType()
              << NO_COLOR << std::endl;
    }
}


void HumanB::setWeapon(Weapon &weapon)
{
   _weapon = &weapon;
}