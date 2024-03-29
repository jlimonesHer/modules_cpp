/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 09:35:29 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/04 10:59:24 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void) {
    ClapTrap clap("jlimones");

    ClapTrap b(clap);
    /* Attack without damage */
    clap.attack("Clap");
    clap.takeDamage(10);
    /* Attack without damage */
    clap.attack("Clap");
    clap.beRepaired(10);
    /* deplete energy points */
    for(unsigned int i = 0;i <= 10; i++)
        clap.attack("clap");
}