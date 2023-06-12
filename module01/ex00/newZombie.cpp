/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:50:29 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/12 12:21:29 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie* zombie;

    zombie = new Zombie;
    zombie->set_name(name);
    return zombie;
}