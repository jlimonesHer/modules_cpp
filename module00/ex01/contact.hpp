/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 19:11:49 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/12 10:42:09 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cstring>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string darkest_secret;
    std::string number;
public:
    int         index;
    Contact();
    ~Contact();
    int add_contact();
    void display_contact();
    void display_table();
};

#endif