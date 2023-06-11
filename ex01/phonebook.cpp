/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 08:22:22 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/11 09:38:44 by jlimones         ###   ########.fr       */
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
	    this->index_last++;
	    this->contact[this->index_last - 1].add_contact();
	    this->contact[this->index_last - 1].index = this->index_last;
    }
    else
    {
        this->contact[MAX-1].add_contact();
	    this->contact[MAX-1].index = this->index_last;
    }
}

void PhoneBook::display_contact()
{
    //system("clear");
    std::cout << this->index_last << std::endl;
    this->contact[this->index_last % MAX].display_contact();
}


void PhoneBook::display_phonebook()
{
    std::string str;
    int         index_search;
    
    std::cout << "insert contac index -> ";
    std::getline(std::cin, str);
    index_search = atoi(str.c_str());
    std::cout << "i_search" << index_search << std::endl;
    std::cout << "i_last" << index_last << std::endl;
    if (index_search <= index_last)
        this->contact[index_search - 1].display_contact();
}
//TODO comprobar q ningun campo este vacio
//TODO formateo de mostrar contacto asd | asd | asd | asd (MAX_LEN = 10)