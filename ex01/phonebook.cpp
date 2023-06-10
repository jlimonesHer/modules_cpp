/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 08:22:22 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/10 14:26:17 by jlimones         ###   ########.fr       */
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
	this->index_last++;
	this->contact[this->index_last % MAX].add_contact();
	this->contact[this->index_last % MAX].index = this->index_last;
}

void PhoneBook::display_contact()
{
    //system("clear");
    std::cout << this->index_last << std::endl;
    this->contact[this->index_last % MAX].display_contact();
}

void PhoneBook::display_phonebook()
{
    for(int i = 1;i <= index_last;i++)
        this->contact[i].display_contact();
}

//TODO display_phonebook muestar la agenda completa