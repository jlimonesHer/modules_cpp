/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 18:36:36 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/20 16:08:50 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cstring>
#include "contact.hpp"

#define MAX 8

class PhoneBook
{
private:
    Contact contact[MAX];
    unsigned int     index_last;
public:
    PhoneBook();
    ~PhoneBook();
    void add();
    void add_contact();
    void display_phonebook_contact();
    void display_all();
};


#endif