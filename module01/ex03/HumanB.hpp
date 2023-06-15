/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:01:15 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/15 16:11:01 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
    Weapon      *_weapon;
    std::string _name;
public:
    HumanB( std::string name );
    ~HumanB();
    void attack();
    void setWeapon(Weapon &weapon);
};

#endif
