/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:21:13 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/07 21:37:50 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

class Span::missingNumbers: public std::exception
{
    virtual const char *what() const throw() {
        return ("Missing numbers");
    }
};

class Span::vectorCompleted: public std::exception
{
    virtual const char *what() const throw() {
        return ("The vector is completed");
    }
};

Span::Span(int _n): n(_n), numberAdded(0)
{
}

Span::~Span()
{
}

Span::Span(Span const &copy)
{
    *this = copy;
}

Span	&Span::operator=(const Span &copy)
{
    n = copy.n;
    numberAdded = copy.numberAdded;
    for (unsigned int i = 0;i < n;i++) {
        lst[i] = copy.lst[i];
    }
    return (*this);
}

void Span::addNumber(int numberToAdd) 
{
    if (numberAdded <= n) {
        lst.push_back(numberToAdd);
        numberAdded++;
        return ;
    }
    //throw()
}

unsigned int Span::getN( void ) {
    return n;
}

unsigned int Span::getLst(int index) {
    return lst[index];
}