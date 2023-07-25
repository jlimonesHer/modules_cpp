/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 09:35:29 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/25 18:34:09 by jlimones         ###   ########.fr       */
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
}