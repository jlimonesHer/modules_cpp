/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:00:40 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/12 10:38:02 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void header_phonebook()
{
    std::cout << "*****************" << std::endl
              << "    Phonebook    " << std::endl
              << "*****************" << std::endl;
}

int main(void)
{
    std::string cmd;
    PhoneBook   phonebook;

    while (1)
    {
        header_phonebook();
        std::cout << "Options: (ADD, SEARCH, EXIT) -> ";
        std::getline(std::cin, cmd);
        if (!cmd.compare("ADD"))
            phonebook.add_contact();
        else if (!cmd.compare("SEARCH"))
            phonebook.display_phonebook_contact();
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