/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:51:03 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/21 15:58:56 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string& target):
    AForm("Robot my request form", 72, 75, target) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy):
AForm(copy) {
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {
    if (this != &copy) {
        *this = copy;
    }
    return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const {
    AForm::execute(executor);
    int _rand;

    _rand = rand();
    if (_rand % 2) {
        std::cout << "that " << this->getTarget() << " has been robotomized." << '\n';
    } else {
        std::cout << "that the robotomy failed." << '\n'; 
    }
}
