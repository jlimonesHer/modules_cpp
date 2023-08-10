/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:38:56 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/10 13:25:45 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource():learnt(0)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < learnt; i++)
		delete inventory[i];
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	(void) copy;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &copy)
{
	(void) copy;
	return (*this);
}


void MateriaSource::learnMateria(AMateria* m)
{
	if (learnt >= 4)
	{
		delete m;
		return ;
	}
	inventory[learnt] = m;
	learnt++;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < learnt; i++)
	{
		if (inventory[i]->getType() == type)
			return (inventory[i]->clone());
	}
	return 0;
}
