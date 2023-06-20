/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 08:22:22 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/20 16:08:19 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
    index_last = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add()
{
    this->index_last++;
}

void	PhoneBook::add_contact()
{
    if (index_last < MAX)
    {
        if (this->contact[this->index_last].add_contact())
	    {
            this->contact[this->index_last].index = this->index_last;
            index_last++;
        }
    }
    else
    {
        this->contact[MAX-1].add_contact();
	    this->contact[MAX-1].index = 7;
    }
}

void PhoneBook::display_phonebook_contact()
{
    std::string  str;
    unsigned int index_search;
    
    if (this->index_last > 0)
    {
        display_all();
        std::cout << "insert contac index -> ";
        std::getline(std::cin, str);
        index_search = atoi(str.c_str());
        if (index_search <= index_last && index_search > 0)
            this->contact[index_search - 1].display_contact();
        else
            std::cout << "contact not available" << std::endl;
    }
    else
       std::cout << "Empty phonebook" << std::endl;
}

void PhoneBook::display_all()
{
    std::cout << "|" << "    id    " << "|" << "first name" << "|" << " last name" << "|" << " nick name" << "|" << std::endl;
    for (size_t i = 0;i < index_last;i++)
        contact[i].display_table();
}
