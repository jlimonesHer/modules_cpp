/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:07:11 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/10 19:03:11 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
    this->brain = new Brain();
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
    delete this->brain;
}

Animal::Animal(Animal const &copy)
{
   std::cout << "Animal copy constructor" << std::endl;
	if (this != &copy)
    {
		this->_type = copy.getType();
    }
}

Animal	&Animal::operator=(const Animal &copy)
{
    std::cout << "Animal assignment operator called" << std::endl;
	if (this != &copy)
    {
		this->_type = copy.getType();   
        this->brain = new Brain();
        *this->brain = *copy.brain;
    }
	return (*this);
}

std::string Animal::getType() const
{
    return this->_type;
}



std::string	Animal::getIdeas(int index)
{
	return (brain->getIdeas(index));
}

void	Animal::setIdeas(int index, std::string str)
{
	brain->setIdeas(index, str);
}