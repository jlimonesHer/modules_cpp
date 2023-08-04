/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 09:35:29 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/04 12:18:24 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main (void) {
    DiamondTrap jlimones("jlimones");
    std::cout << "hitPoints -> " << jlimones.getHitPoints() << std::endl;
    std::cout << "energyPoints -> " << jlimones.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage -> " << jlimones.getAttack() << std::endl;
    jlimones.attack("Target");
    jlimones.whoAmI();
    /**/
    jlimones.attack("Target");
	jlimones.whoAmI();
	jlimones.guardGate();
	jlimones.highFivesGuys();
}