/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:01:02 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/15 15:55:22 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &weapon):_name(name),
    _weapon(weapon){}

HumanA::~HumanA(){
}

void HumanA::attack(){
    std::cout << BLUE << _name 
              << YELLOW << " attacks with their "
              << RED << _weapon.getType()
              << NO_COLOR << std::endl;
}
