/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:17:02 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/20 12:13:33 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class AForm::GradeTooHighException : public std::exception {
    virtual const char *what() const throw() { return "Grade Too High Exception"; }
};

class AForm::GradeTooLowException : public std::exception {
    virtual const char *what() const throw() { return "Grade Too Low Exception"; }
};

class AForm::FormNotSigned: public std::exception {
	virtual const char *what() const throw() {
		return ("<Form not signed>");
	}
};

class AForm::NotGrade: public std::exception {
	virtual const char *what() const throw() {
		return ("<Not grade>");
	}
};

AForm::AForm(std::string _name, int const _gradeSigned, int const _gradeExecute, 
    std::string _target): name(_name), isSigned(false), gradeSigned(_gradeSigned),
    gradeExecute(_gradeExecute), target(_target)
{
    if (gradeExecute > 150 || gradeSigned > 150) {
        throw GradeTooLowException();
    } else if (gradeExecute < 1 || gradeSigned < 1) {
        throw GradeTooHighException();
    }
}

AForm::~AForm()
{
}

AForm::AForm(AForm const &copy):
name(copy.getName()), isSigned(copy.getIsSigned()), gradeSigned(copy.getGradeSigned()), 
    gradeExecute(copy.getGradeExecute())
{
}

AForm	&AForm::operator=(const AForm &copy)
{
    isSigned = copy.getIsSigned();
    return (*this);
}

/***********GETTERS AND SETTERS**********/

std::string    AForm::getName(void) const {
    return name;
}
std::string    AForm::getTarget(void) const {
    return target;
}
bool    AForm::getIsSigned()const {
    return isSigned;
}
int    AForm::getGradeSigned()const {
    return gradeSigned;
}
int    AForm::getGradeExecute()const {
    return gradeExecute;
}

void    AForm::setIsSigned(bool newSigned) {
    isSigned = newSigned;
}

void AForm::beSigned(Bureaucrat& b)
{
    if (b.getGrade() > gradeSigned) {
        throw GradeTooLowException();
    } else {
        isSigned = true;
    }
}

void  AForm::execute(Bureaucrat const& executor) const
{
    if (executor.getGrade() > this->getGradeExecute()) {
		throw AForm::NotGrade();
    } else if (!this->getIsSigned()) {
		throw AForm::FormNotSigned();	
    }
}

std::ostream &operator<<(std::ostream &out, const AForm &form)
{
	out << form.getName() << std::endl
        << "Is it signed? " << form.getIsSigned() << std::endl
        << "Grade to sign -> " << form.getGradeSigned() << std::endl
        << "Grade to execute -> " << form.getGradeExecute() << std::endl;
	return out;
}
