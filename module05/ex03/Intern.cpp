/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:44:45 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/21 17:45:55 by jlimones         ###   ########.fr       */
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
    std::string nameForms[3] = {
        "shrubbry",
        "robotomy",
        "presidential"
    };
    std::string nameLower = "";
    for (int i = 0;i < name.length(); i++) {
        nameLower += tolower(name[i]);
    }