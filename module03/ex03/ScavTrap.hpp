/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 09:35:13 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/04 11:26:05 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap :virtual public ClapTrap
{
protected:
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const& copy);
    ~ScavTrap();
    void guardGate();
    ScavTrap &operator=(ScavTrap const& copy);
    void attack(const std::string& target);
};


#endif