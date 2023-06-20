/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:54:47 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/20 16:13:04 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# define ZOMBIES 10

#include <iostream>
#include <cstring>

class Zombie
{
private:
    std::string name;
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void announce();
};
Zombie* zombieHorde( int N, std::string name );
#endif