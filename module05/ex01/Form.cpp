/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:17:02 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/19 20:24:56 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class Form::GradeTooHighException : public std::exception {
    virtual const char *what() const throw() { return "Grade Too High Exception"; }
};

class Form::GradeTooLowException : public std::exception {
    virtual const char *what() const throw() { return "Grade Too Low Exception"; }
};

Form::Form(std::string _name, bool _isSigned, int const _gradeSigned, int const _gradeExecute):
name(_name), isSigned(_isSigned), gradeSigned(_gradeSigned), gradeExecute(_gradeExecute)
{
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

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << form.getName() << "" << std::endl;
	return os;
}