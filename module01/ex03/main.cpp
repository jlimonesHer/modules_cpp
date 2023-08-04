/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:59:46 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/02 11:50:22 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

void leaks()
{
    system("leaks -q unnecessary_violence");
}

int main()
{
    //atexit(leaks);
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
}
{
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
}
return 0;
}