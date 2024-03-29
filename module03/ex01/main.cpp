/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 09:35:29 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/21 17:56:56 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void) {
    ScavTrap jlimones("jlimones");
    ScavTrap abarriga("abarriga");
    std::cout << jlimones.getEnergyPoints() << std::endl;
    jlimones.guardGate();
    for (int i = 1;i <= 50;i++)
    {
        jlimones.attack("Target");
        std::cout << i << std::endl;
    }
    jlimones.beRepaired(10);
}