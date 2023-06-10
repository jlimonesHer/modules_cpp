/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 18:36:36 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/10 14:16:09 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cstring>
#include "contact.hpp"

#define MAX 3

class PhoneBook
{
private:
    Contact contact[MAX];
    int     total_contac;
    int     index_last;
public:
    PhoneBook();
    ~PhoneBook();
    void add();
    void add_contact();
    void display_contact();
    void display_phonebook();
};


#endif