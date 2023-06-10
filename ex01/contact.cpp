/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 09:02:38 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/10 14:24:52 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

#include <iostream>
#include <cstring>

Contact::Contact()
{
    this->index = 0;
}

Contact::~Contact()
{
}

void Contact::add_contact()
{
    std::cout << "Insert first name: ";
    std::getline(std::cin, this->first_name);
    std::cout << "Insert last name: ";
    std::getline(std::cin, this->last_name);
    std::cout << "Insert nick name: ";
    std::getline(std::cin, this->nick_name);
    std::cout << "Insert phone number: ";
    std::getline(std::cin, this->number);
    std::cout << "Insert darkest secret: ";
    std::getline(std::cin, this->darkest_secret);
}

void Contact::display_contact()
{

     std::cout << this->first_name << std::endl;
     std::cout << this->last_name << std::endl;
     std::cout << this->nick_name << std::endl;
     std::cout << this->number << std::endl;
     std::cout << this->darkest_secret << std::endl << std::endl;
}

// void Contact::display_phonebook()
// {
//     for (size_t i = 0; i < index; i++)
//     {
//      std::cout << this->first_name << std::endl;
//      std::cout << this->last_name << std::endl;
//      std::cout << this->nick_name << std::endl;
//      std::cout << this->number << std::endl;
//      std::cout << this->darkest_secret << std::endl;
//     }
// }