/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 09:35:29 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/19 19:03:35 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main (void) {
    FragTrap jlimones("jlimones");
    ScavTrap abarriga("abarriga");
    abarriga.guardGate();
    for (int i = 1;i <= 50;i++)
    {
        jlimones.attack("Target");
        std::cout << i << std::endl;
    }
    jlimones.beRepaired(10);
    jlimones.highFivesGuys();
}