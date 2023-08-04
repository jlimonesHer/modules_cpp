/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:21:49 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/04 11:49:55 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DIAMONDTRAP_HPP
#define  DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
protected:
    std::string     _name;
public:
    DiamondTrap( void );
    ~DiamondTrap( void );
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap const &copy);
	DiamondTrap	&operator=(DiamondTrap const &copy);
    void    attack(const std::string &target);
	void	whoAmI();

};




#endif