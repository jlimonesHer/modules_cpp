/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 09:35:36 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/18 19:28:58 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;
public:
    ClapTrap( std::string name );
    ~ClapTrap();
    ClapTrap(ClapTrap const &copy);
    ClapTrap &operator=(ClapTrap const &copy);

    void setHitPoints( unsigned int amountPoint );
    void setEnergyPoints( unsigned int amountPoint );
    void setAttack( unsigned int damage );
    unsigned int getHitPoints( void ) const;
    unsigned int getEnergyPoints( void ) const;
    unsigned int getAttack( void ) const;
    
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif