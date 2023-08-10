/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:19:22 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/10 18:13:09 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

void leaks()
{
    system("leaks -q AMateria");
}

int main()
{
    atexit(leaks);
    
    IMateriaSource* src = new MateriaSource();
    
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    AMateria* ice;
    AMateria* ice2;
    AMateria* ice3;
    AMateria* cure;
    
    ice = src->createMateria("ice");
    me->equip(ice);
    ice2 = src->createMateria("ice");
    me->equip(ice2);
    ice3 = src->createMateria("ice");
    me->equip(ice3);
    
    cure = src->createMateria("cure");
    me->equip(cure);
    
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(3, *bob);
    me->use(-1, *bob);
    me->unequip(0);
    me->unequip(1);
    me->use(1, *bob);
    
    delete ice;
    delete ice2;
    delete ice3;
    delete cure;
    delete bob;
    delete me;
    delete src;
    return 0;
}