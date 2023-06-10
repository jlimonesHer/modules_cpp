/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:00:40 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/10 14:23:24 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
    std::string cmd;
    PhoneBook   phonebook;

    while (1)
    {
        std::cout << "To do(ADD, SEARCH, EXIT) -> ";
        std::getline(std::cin, cmd);
        if (!cmd.compare("ADD"))
            phonebook.add_contact();
        else if (!cmd.compare("SEARCH"))
            phonebook.display_phonebook();
        else if (!cmd.compare("EXIT"))
        {
            std::cout << "See you later!" << std::endl;
            return (0);
        }
        else
            std::cout << "The command '" + cmd + "' not exist:" << std::endl;
        //phonebook.display_contact();
    }
}