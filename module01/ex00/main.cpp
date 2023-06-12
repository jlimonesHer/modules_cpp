/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:49:05 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/12 18:05:25 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void)
{
    Zombie *zombie_ptr;

    zombie_ptr = newZombie("Limones");
    zombie_ptr->announce();
    randomChump("Hernandez");
    
    return 0;
}