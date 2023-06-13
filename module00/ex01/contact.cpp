/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 09:02:38 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/12 10:32:58 by jlimones         ###   ########.fr       */
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
    std::string tmp;
    std::string tmp1;
    std::string tmp2;
    std::string tmp3;
    std::string tmp4;

    std::cout << "Insert first name: ";
    std::getline(std::cin, tmp);
    if (tmp == "")
        return(std::cout << "the field cannot be empty!" << std::endl, 0);
    std::cout << "Insert last name: ";
    std::getline(std::cin, tmp1);
    if (tmp1 == "")
        return(std::cout << "the field cannot be empty!" << std::endl, 0);
    std::cout << "Insert nick name: ";
    std::getline(std::cin, tmp2);
    if (tmp2 == "")
        return(std::cout << "the field cannot be empty!" << std::endl, 0);
    std::cout << "Insert phone number: ";
    std::getline(std::cin, tmp3);
    if (tmp3 == "")
        return(std::cout << "the field cannot be empty!" << std::endl, 0);
    std::cout << "Insert darkest secret: ";
    std::getline(std::cin, tmp4);
    if (tmp4 == "")
        return(std::cout << "the field cannot be empty!" << std::endl, 0);   
    this->first_name = tmp;
    this->last_name = tmp1;
    this->nick_name = tmp2;
    this->number = tmp3;
    this->darkest_secret = tmp4;
    return 1;
}

void Contact::display_contact()
{

     std::cout << "Id: " << this->first_name << std::endl;
     std::cout << "First name: " << this->first_name << std::endl;
     std::cout << "Last name: " << this->last_name << std::endl;
     std::cout << "Nick name: " << this->nick_name << std::endl;
     std::cout << "Number: " << this->number << std::endl;
     std::cout << "Dark secret: " << this->darkest_secret << std::endl;
}

std::string trim_len_10(std::string str)
{
	if (str.length() > 9)
		return (str.substr(0, 9) + ".");
	return (std::string(10 - str.length(), ' ') + str);
}

void Contact::display_table()
{
    std::cout << "|" << "         " <<this->index + 1;
    std::cout << "|" << trim_len_10(this->first_name);
    std::cout << "|" << trim_len_10(this->last_name);
    std::cout << "|" << trim_len_10(this->nick_name) << "|" << std::endl;
}
