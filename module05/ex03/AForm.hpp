/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:16:37 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/21 15:58:48 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include <fstream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        std::string const   name;
        bool                isSigned;
        int const           gradeSigned;
        int const           gradeExecute;
        std::string         target;
        AForm();
        
    public:
        AForm(std::string _name, int const _gradeSigned, int const _gradeExecute,
            std::string _target);
        virtual ~AForm() = 0;
        AForm(AForm const &copy);
        AForm	&operator=(AForm const &copy);

        std::string    getName(void)const;
        std::string    getTarget(void)const;
        bool   getIsSigned( void )const;
        int    getGradeSigned( void )const;
        int    getGradeExecute( void )const;

        void    setName( std::string newName );
        void    setIsSigned( bool newSigned );
        void    setGradeSigned( int newGrade );
        void    setGradeExecute( int newGrade );

        virtual void    execute(Bureaucrat const& executor) const = 0;
        void    beSigned(Bureaucrat& b);

        class GradeTooHighException;
        class GradeTooLowException;
        class FormNotSigned;
        class NotGrade;
};
std::ostream &operator<<(std::ostream &os, const AForm &form);

#endif
