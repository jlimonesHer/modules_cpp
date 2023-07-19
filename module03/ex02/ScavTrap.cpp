/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 09:36:20 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/19 18:19:42 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
    std::cout << "ScavTrap constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor called." << std::endl;
    this->setAttack(20);
    this->setEnergyPoints(50);
    this->setHitPoints(100);
}

ScavTrap::ScavTrap(ScavTrap const& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &copy)
	{
		_attackDamage = copy.getAttack();
		_energyPoints = copy.getEnergyPoints();
		_hitPoints = copy.getHitPoints();
	}
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy) {
    _attackDamage = copy.getAttack();
    _energyPoints = copy.getEnergyPoints();
    _hitPoints = copy.getHitPoints();
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called." << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->getName() << " is now in Gate Keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (_energyPoints == 0)
    {
        std::cout << "ScavTrap " <<  _name <<" can't attack, he has no energy points." << std::endl;
        return;   
    }
    _energyPoints--;
    std::cout << _name << " attacked " <<  target <<" causing " << _attackDamage << " points of damage." << std::endl;
}