/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:55:56 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/21 16:03:58 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include <string>

int main()
{   
    std::string one = "one";
    std::string two = "two";
    std::string three = "three";
    
    ShrubberyCreationForm basic(one);
    ShrubberyCreationForm two2(two);
    RobotomyRequestForm middle(two);
    PresidentialPardonForm pro(three);

    Bureaucrat president("president", 1);
    Bureaucrat executive("executive", 20);
    Bureaucrat administrative("administrative", 145);

    administrative.signForm(basic);
    administrative.signForm(two2);
    administrative.executeForm(basic);   
    president.executeForm(two2);   
    executive.executeForm(basic);   
    std::cout << '\n';
    
    executive.signForm(middle);
    administrative.executeForm(middle);
    std::cout << '\n';
    
    /*cannot sign or execute */
    administrative.signForm(pro);
    president.executeForm(pro);
    president.signForm(pro);
    president.executeForm(pro);

    
    return 0;
}