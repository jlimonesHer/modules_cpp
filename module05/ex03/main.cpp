/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:55:56 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/21 19:10:36 by jlimones         ###   ########.fr       */
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
    std::string form1 = "aaaa robotomy reqUest";
    std::string form2 = "Presidential pardon";
    std::string form3 = "shrubbddddery creation";
    std::string target = "three";

    Intern intern;

    AForm *rrf;
    AForm *ppf;
    AForm *scf;
    rrf = intern.makeForm(form1, target);
    ppf = intern.makeForm(form2, target);
    scf = intern.makeForm(form3, target);

    delete rrf;
    delete ppf;
    delete scf;
    return 0;
}