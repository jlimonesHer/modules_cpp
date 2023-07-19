/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 09:35:29 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/19 09:28:08 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void) {
    ClapTrap clap("jlimones");

    /* Attack without damage */
    clap.attack("Clap");
    clap.takeDamage(10);
    /* Attack without damage */
    clap.attack("Clap");
    clap.beRepaired(10);
    for(unsigned int i = 0;i <= 10; i++)
        clap.attack("clap");
}