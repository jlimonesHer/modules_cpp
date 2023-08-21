/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 12:02:12 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/21 15:52:51 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class Bureaucrat::GradeTooHighException : public std::exception {
    virtual const char *what() const throw() { return "Grade Too High Exception"; }
};

class Bureaucrat::GradeTooLowException : public std::exception {
    virtual const char *what() const throw() { return "Grade Too Low Exception"; }
};

Bureaucrat::Bureaucrat(std::string _name, int _grade): name(_name), grade(_grade)
{
    if (_grade > 150) {
        throw GradeTooLowException();
    } else if (_grade < 1) {
        throw GradeTooHighException();
    }
}

void Bureaucrat::signForm(AForm& form) {
    try {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    } catch (std::exception& e) {
        std::cout << this->getName() << " couldn'n sign " 
        << form.getName() << " because " << e.what() << std::endl;
    }
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
   grade = copy.getGrade();
    return(*this);
}

/*****************/
std::string Bureaucrat::getName( void ) const {
    return name;
}
int Bureaucrat::getGrade( void ) const {
    return this->grade;
}

void Bureaucrat::setgrade(int newGrade) {
    grade = newGrade;
}

void Bureaucrat::incrementGrade( void ) {
    if (grade <= 1)
        throw GradeTooHighException();
    else
        grade--;
}

void Bureaucrat::decrementGrade( void ) {
    if (grade >= 150)
        throw GradeTooLowException();
    else
        grade++;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return os;
}

void  Bureaucrat::executeForm(AForm const &form) {
    try
	{
		form.execute(*this);
		std::cerr << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << this->getName() << " can't run " << form.getName() \
			<< ": Reason: "<< e.what() << std::endl;
	}
}