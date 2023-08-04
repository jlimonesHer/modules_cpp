/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:39:47 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/04 12:22:29 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
    std::cout << "\033[0;36mFragTrap constructor called.\033[m" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "\033[0;36mFragTrap constructor called.\033[m" << std::endl;
    this->setHitPoints(100);
    this->setEnergyPoints(100);
    this->setAttack(30);
}

FragTrap::FragTrap(FragTrap const& copy)
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

FragTrap &FragTrap::operator=(const FragTrap &copy) {
    _attackDamage = copy.getAttack();
    _energyPoints = copy.getEnergyPoints();
    _hitPoints = copy.getHitPoints();
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "\033[0;36mFragTrap destructor called.\033[m" << std::endl;
}

void	FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->getName() << "\033[0;32m says Higs fives Guys!\033[m" << std::endl;
}