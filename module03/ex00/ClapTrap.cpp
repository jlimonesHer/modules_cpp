/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 09:37:01 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/18 19:32:09 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ):_hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    _name = name;
    std::cout << "Create ClapTrap " << _name << std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << "Call Destructor " << this->_name << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const& copy) {
    _attackDamage = copy.getAttack();
    _energyPoints = copy.getEnergyPoints();
    _hitPoints = copy.getHitPoints();
    return (*this);
}


/* * * * * * * setter & getter * * * * * * */

void ClapTrap::setHitPoints( unsigned int amountPoint ) {
    this->_hitPoints = amountPoint;
}

void ClapTrap::setEnergyPoints( unsigned int amountPoint ) {
    this->_energyPoints = amountPoint;
}

void ClapTrap::setAttack( unsigned int damage ) {
    this->_attackDamage = damage;
}

unsigned int ClapTrap::getHitPoints() const {
    return (this->_hitPoints);
}

unsigned int ClapTrap::getEnergyPoints() const {
    return (this->_energyPoints);
}

unsigned int ClapTrap::getAttack() const {
    return (this->_attackDamage);
}

/* * * * * * * * * * * * * * * * * * * * * * **/


void ClapTrap::attack(const std::string& target) {
    if (_energyPoints == 0)
    {
        std::cout << "Claptrap " <<  _name <<" can't attack, he has no energy points." << std::endl;
        return;   
    }
    _energyPoints--;
    std::cout << _name << " attacked " <<  target <<" causing " << _attackDamage << " points of damage." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_energyPoints == 0)
    {
       std::cout << "Claptrap " <<  _name << " can't take damage, he has no energy points." << std::endl;
       return;
    }
    _energyPoints--;
    _attackDamage += amount;
    std::cout << "ClapTrap " << _name << " take " << amount << " attack damage." << std::endl;
}

    void ClapTrap::beRepaired(unsigned int amount) {
         if (_energyPoints == 0)
        {
        std::cout << "Claptrap " <<  _name << " cannot be repaired, he has no energy points." << std::endl;
        return;
        }
        _energyPoints--;
        _hitPoints += amount;
        std::cout << "ClapTrap " << _name << " get " << amount << " hit points." << std::endl;
    }