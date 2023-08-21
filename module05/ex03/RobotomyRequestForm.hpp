/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:49:58 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/21 15:59:23 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
#include "AForm.hpp"


class RobotomyRequestForm: public AForm
{
    private:
        RobotomyRequestForm();

    public:
        RobotomyRequestForm(std::string& target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const &copy);
        RobotomyRequestForm	&operator=(RobotomyRequestForm const &copy);
        void execute(Bureaucrat const& executor) const;
};

#endif
