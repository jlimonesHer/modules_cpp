/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:17:08 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/10 18:14:16 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string _name): name(_name), n_materia(0)
{
    for(int i = 0; i < MAX_SLOT; i++)
        inventory[i] = nullptr;
}

Character::~Character()
{
}

Character::Character(Character const &copy): name(copy.getName()), n_materia(0)
{
	for (int i = 0; i < copy.n_materia; i++)
		this->equip(copy.inventory[i]->clone());
	for (int i = this->n_materia; i < 4; i++)
		this->inventory[i] = nullptr;
}

Character	&Character::operator=(const Character &copy)
{
   this->name = copy.getName();
   return (*this);
}

std::string const& Character::getName() const
{
    return(name);
}

void Character::equip(AMateria* m)
{
    if (n_materia < MAX_SLOT && n_materia >= 0)
    {
        inventory[n_materia] = m;
        n_materia++;
    }
    return ;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= n_materia || inventory[idx] == nullptr)
        return ;
    inventory[idx] = nullptr;
	this->n_materia--;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 ||  idx >= n_materia || inventory[idx] == nullptr)
    {
        std::cout << "Empty slot!" << std::endl;
        return ;
    }
    inventory[idx]->use(target);
}