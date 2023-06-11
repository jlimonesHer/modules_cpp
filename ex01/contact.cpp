/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 09:02:38 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/11 09:33:06 by jlimones         ###   ########.fr       */
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

int Contact::add_contact()
{
    std::cout << "Insert first name: ";
    std::getline(std::cin, this->first_name);
    if (this->first_name == "")
    {
        std::cout << "the field cannot be empty";
        return 0;
    }
    std::cout << "Insert last name: ";
    std::getline(std::cin, this->last_name);
    if (this->last_name == "")
    {
        std::cout << "the field cannot be empty";
        return 0;
    }
    std::cout << "Insert nick name: ";
    std::getline(std::cin, this->nick_name);
    if (this->nick_name == "")
    {
        std::cout << "the field cannot be empty";
        return 0;
    }
    std::cout << "Insert phone number: ";
    std::getline(std::cin, this->number);
    if (this->number == "")
    {
        std::cout << "the field cannot be empty";
        return 0;
    }
    std::cout << "Insert darkest secret: ";
    std::getline(std::cin, this->darkest_secret);
    if (this->darkest_secret == "")
    {
        std::cout << "the field cannot be empty";
        return 0;
    }
}

void Contact::display_contact()
{

     std::cout << this->first_name << std::endl;
     std::cout << this->last_name << std::endl;
     std::cout << this->nick_name << std::endl;
     std::cout << this->number << std::endl;
     std::cout << this->darkest_secret << std::endl << std::endl;
}
