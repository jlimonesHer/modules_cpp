/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:49:05 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/14 12:50:06 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

void leaks()
{
    system("leaks brainz");
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