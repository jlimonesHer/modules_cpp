/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:49:05 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/14 16:03:34 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void leaks()
{
    system("leaks -q brainz");
}

int main(void)
{
    atexit(leaks);
    Zombie *zombie_ptr;
    
    zombie_ptr = newZombie("Limones");
    zombie_ptr->announce();
    randomChump("Hernandez");
    delete zombie_ptr;
    return 0;
}