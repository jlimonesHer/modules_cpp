/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:17:02 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/20 12:13:33 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class Form::GradeTooHighException : public std::exception {
    virtual const char *what() const throw() { return "Grade Too High Exception"; }
};

class Form::GradeTooLowException : public std::exception {
    virtual const char *what() const throw() { return "Grade Too Low Exception"; }
};

Form::Form(std::string _name, int const _gradeSigned, int const _gradeExecute):
name(_name), isSigned(false), gradeSigned(_gradeSigned), gradeExecute(_gradeExecute)
{
    if (gradeExecute > 150 || gradeSigned > 150) {
        throw GradeTooLowException();
    } else if (gradeExecute < 1 || gradeSigned < 1) {
        throw GradeTooHighException();
    }
}

Form::~Form()
{
}

Form::Form(Form const &copy):
name(copy.getName()), isSigned(copy.getIsSigned()), gradeSigned(copy.getGradeSigned()), 
    gradeExecute(copy.getGradeExecute())
{
}

Form	&Form::operator=(const Form &copy)
{
    isSigned = copy.getIsSigned();
    return (*this);
}

/***********GETTERS AND SETTERS**********/

std::string    Form::getName(void) const {
    return name;
}
bool    Form::getIsSigned()const {
    return isSigned;
}
int    Form::getGradeSigned()const {
    return gradeSigned;
}
int    Form::getGradeExecute()const {
    return gradeExecute;
}

void    Form::setIsSigned(bool newSigned) {
    isSigned = newSigned;
}

void Form::beSigned(Bureaucrat& b)
{
    if (b.getGrade() > gradeSigned) {
        throw GradeTooLowException();
    } else {
        isSigned = true;
    }
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	out << form.getName() << std::endl
        << "Is it signed? " << form.getIsSigned() << std::endl
        << "Grade to sign -> " << form.getGradeSigned() << std::endl
        << "Grade to execute -> " << form.getGradeExecute() << std::endl;
	return out;
}
