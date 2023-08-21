/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:52:01 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/21 15:59:12 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENCIALPARDONFORM_HPP
#define PRESIDENCIALPARDONFORM_HPP

# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
    private:
        PresidentialPardonForm();

    public:
        PresidentialPardonForm(std::string& target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const &copy);
        PresidentialPardonForm	&operator=(PresidentialPardonForm const &copy);
        void execute(Bureaucrat const& executor) const;
};

#endif
