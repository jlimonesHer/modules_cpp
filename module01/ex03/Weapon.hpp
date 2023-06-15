/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:00:08 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/15 15:43:58 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# define BLUE "\033[0;34m"
# define OBJ_COLOR "\033[0;36m"
# define GREEN "\033[0;32m"
# define RED "\033[0;31m"
# define YELLOW "\033[0;33m"
# define NO_COLOR "\033[m"

#include <iostream>

class Weapon
{
private:
    std::string _type;
public:
    Weapon();
    ~Weapon();
    Weapon( std::string type );
    const std::string &getType()const;
    void setType( std::string type );
};

#endif