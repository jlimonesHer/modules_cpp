/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:44:45 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/21 18:57:46 by jlimones         ###   ########.fr       */
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

    AForm *form = NULL;
    int nameIndex = -1;
    std::string nameLower = "";
    std::string nameForms[3] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };
    
    for (size_t i = 0;i < name.length(); i++) {
        nameLower += tolower(name[i]);
    }
    for (int i = 0;i < 3; i++) {
        size_t nameFind = nameLower.find(nameForms[i]);
        if (nameFind != std::string::npos) {
            nameIndex = i;
            break ;
        }
    }

    switch (nameIndex)
    {
    case 0:
        form = new ShrubberyCreationForm(target);
        std::cout << "Intern creates " << form->getName() << '\n';
        break;
    case 1:
        form = new RobotomyRequestForm(target);
        std::cout << "Intern creates " << form->getName() << '\n';
        break;
    case 2:
         form = new PresidentialPardonForm(target);
        std::cout << "Intern creates " << form->getName() << '\n';
        break;
    default:
        std::cout << "Form name not found" << '\n';
        break;
    }
    return form;
}