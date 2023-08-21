/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:55:56 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/21 17:44:41 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "AForm.hpp"
#include <string>

int main()
{   
    std::string one = "ONE ONE ONE ONEONE";
    std::string two = "two";
    std::string three = "three";
    
    // ShrubberyCreationForm basic(one);
    // ShrubberyCreationForm two2(two);
    // RobotomyRequestForm middle(two);
    // PresidentialPardonForm pro(three);

    // Bureaucrat president("president", 1);
    // Bureaucrat executive("executive", 20);
    // Bureaucrat administrative("administrative", 145);

    Intern i;
    i.makeForm(one, two);
    
    return 0;
}