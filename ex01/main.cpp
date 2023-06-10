/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:00:40 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/10 08:11:39 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
    std::string a;
    while (1)
    {
        std::cout << "To do(ADD, SEARCH, EXIT) -> ";
        std::getline(std::cin, a);
        if (!a.compare("ADD"))
            std::cout << "Has puesto " + a << std::endl;
        else if (!a.compare("SEARCH"))
            std::cout << "Has puesto " + a << std::endl;
        else if (!a.compare("EXIT"))
            std::cout << "Has puesto " + a << std::endl;
        else
            std::cout << "The command '" + a + "' not exist:" << std::endl;
    }
}