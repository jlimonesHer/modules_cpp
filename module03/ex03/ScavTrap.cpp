/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 09:36:20 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/04 12:22:53 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
    std::cout << "\033[0;33mScavTrap constructor called.\033[m" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "\033[0;33mScavTrap constructor called.\033[m" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttack(20);
}

ScavTrap::ScavTrap(ScavTrap const& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	_attackDamage = copy.getAttack();
	_energyPoints = copy.getEnergyPoints();
	_hitPoints = copy.getHitPoints();
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy) {
    _attackDamage = copy.getAttack();
    _energyPoints = copy.getEnergyPoints();
    _hitPoints = copy.getHitPoints();
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "\033[0;33mScavTrap Destructor called.\033[m" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->getName() << " is now in Gate Keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (_energyPoints == 0)
    {
        std::cout << "ScavTrap " <<  _name << "\033[0;31m can't attack, he has no energy points.\033[m" << std::endl;
        return;   
    }
    _energyPoints--;
    std::cout << _name << " attacked " <<  target <<" causing " << _attackDamage << " points of damage." << std::endl;
}