/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:52:55 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/21 15:59:02 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string& target):
    AForm("Presidential pardom form",25, 5, target) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy): 
    AForm(copy) {
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) {
    if(this != &copy) {
        *this = copy;
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const {
    AForm::execute(executor);
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." 
              << '\n';
}
