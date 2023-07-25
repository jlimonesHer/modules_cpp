/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:21:49 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/25 18:27:06 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DIAMONDTRAP_HPP
#define  DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, FragTrap
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