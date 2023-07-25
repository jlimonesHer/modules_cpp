/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:23:50 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/25 18:38:49 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap(), FragTrap()
{
    std::cout << "\033[0;32mDiamondTrap constructor called.\033[m" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ScavTrap(name), FragTrap(name)
{
    std::cout << "\033[0;32mDiamondTrap constructor called.\033[m" << std::endl;
    ClapTrap::_name = name + "_clap_name";
    _name = name;
    setEnergyPoints(ScavTrap::_energyPoints / 2);
    setHitPoints(FragTrap::_hitPoints);
    setAttack(FragTrap::_attackDamage);
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy) 
{
    	std::cout << "Copy constructor called" << std::endl;
	if (this != &copy)
	{
		_name = copy.getName();
		_attackDamage = copy.getAttack();
		_energyPoints = copy.getEnergyPoints();
		_hitPoints = copy.getHitPoints();
	}
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &copy) 
{
    	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		_name = copy.getName();
		_attackDamage = copy.getAttack();
		_energyPoints = copy.getEnergyPoints();
		_hitPoints = copy.getHitPoints();
	}
	return (*this);
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
	std::cout << "Attack DiamondTrap\n";
}

void	DiamondTrap::whoAmI(){
    std::cout << "my name is " << _name << " and they call me " << ClapTrap::getName() << std::endl;
}

DiamondTrap::~DiamondTrap()
{
     std::cout << "\033[0;32mDiamondTrap Destructor called.\033[m" << std::endl;
}