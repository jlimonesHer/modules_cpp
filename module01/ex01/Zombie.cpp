/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:55:36 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/14 15:51:06 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie()
{
}

Zombie::Zombie(std::string name): name(name) {}

Zombie::~Zombie()
{
    std::cout << this->name + ": detroyed"<< std::endl;
}

void Zombie::announce(Zombie *horde)
{
    std::cout << this->name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}
