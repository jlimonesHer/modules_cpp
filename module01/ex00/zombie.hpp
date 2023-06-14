/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:49:28 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/14 16:01:20 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <cstring>

class Zombie
{
private:
    std::string _name;
public:
    Zombie();
    ~Zombie();
    void announce();
    void set_name(std::string name);
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );
#endif