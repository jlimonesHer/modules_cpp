/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:49:44 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/12 18:04:06 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"


Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << name + "-> detroyed"<< std::endl;
}

void Zombie::announce()
{
    std::cout << this->name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}