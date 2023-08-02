/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 08:56:51 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/29 09:28:04 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(Brain const &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain	&Brain::operator=(const Brain &copy)
{
    std::cout << "Brain assignmen operator called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = copy.ideas[i];
    }
    return *this;
}

std::string Brain::getIdeas(int i)
{
    return ideas[i];
}

void Brain::setIdeas(int i, std::string newIdea)
{
    this->ideas[i] = newIdea;
}