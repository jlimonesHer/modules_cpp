/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 12:08:34 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/20 11:50:24 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

class Bureaucrat
{
    private:
        std::string const   name;
        int                 grade;
        Bureaucrat();
    public:
        Bureaucrat(std::string _name, int _grade);
        ~Bureaucrat();
        Bureaucrat(Bureaucrat const &copy);
        Bureaucrat	&operator=(Bureaucrat const &copy);


        std::string getName( void ) const;
        int getGrade( void ) const;

        void setgrade(int newGrade);
        
        void incrementGrade( void );
        void decrementGrade( void );
        
        class GradeTooHighException;
        class GradeTooLowException;
};
std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif
