/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:47:23 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/21 15:59:43 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHURUBBERCREATIONFORM_HPP
#define SHURUBBERCREATIONFORM_HPP

# include <iostream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        ShrubberyCreationForm();
        
    public:
        ShrubberyCreationForm(std::string &target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm const &copy);
        ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &copy);
        void execute(Bureaucrat const& executor) const;
};

#endif
