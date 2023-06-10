/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 19:11:49 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/10 08:07:16 by jlimones         ###   ########.fr       */
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
    int         index;
    
public:
    Contact(/* args */);
    ~Contact();
};

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}
#endif