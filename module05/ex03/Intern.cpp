/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:44:45 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/21 18:19:32 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <cctype>

Intern::Intern() {
}

Intern::~Intern() {
}

Intern::Intern(Intern const &copy) {
    *this = copy;
}

Intern	&Intern::operator=(const Intern &copy) {
    if (this != &copy) {
        *this = copy;
    }
    return *this;
}

AForm *Intern::makeForm(std::string &name, std::string &target) {

    bool isName = false;
    
    std::string nameForms[3] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };
    std::string nameLower = "";
    for (int i = 0;i < name.length(); i++) {
        nameLower += tolower(name[i]);
    }
    for (int i = 0;i < 3; i++) {
        int nameFind = nameLower.find(nameForms[i]);
        if (nameFind == 0) {
            isName = true;
            break ;
        }
    }


    
    std::cout << nameLower << '\n';
    std::cout << isName << '\n';
    PresidentialPardonForm a(nameForms[2]);
    return &a;
}