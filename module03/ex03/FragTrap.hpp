/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:40:17 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/21 19:20:10 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap :virtual public ClapTrap
{
private:
    
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const& copy);
    ~FragTrap();
    FragTrap &operator=(FragTrap const& copy);
    void highFivesGuys();
};




#endif