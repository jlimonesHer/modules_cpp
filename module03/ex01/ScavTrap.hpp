/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 09:35:13 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/19 18:20:28 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

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