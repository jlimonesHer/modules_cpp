/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:54:31 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/14 15:52:37 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void leaks()
{
    system("leaks -q Moar_brainz");
}

int main()
{
    atexit(leaks);
    Zombie *horde;

    horde = zombieHorde(ZOMBIES, "noriante");
    for ( int i = 0; i < ZOMBIES; i++ )
        horde[i].announce(horde);
    delete []horde;
}