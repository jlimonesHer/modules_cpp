/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:21:13 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/08 14:31:55 by jlimones         ###   ########.fr       */
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

Span::Span(int _n): N(_n)
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
    N = copy.N;
    lst = std::set<int>(copy.lst);
    return (*this);
}

void Span::addNumber(int numberToAdd) 
{
    if (lst.size() < N) {
        lst.insert(numberToAdd);
        return ;
    }
    throw vectorCompleted();
}

unsigned int Span::longestSpan( void ) {
    std::vector<int> container(lst.begin(), lst.end());
    if (container.size() < 2)
        throw missingNumbers();
    std::cout << container[container.size() - 1] - container[0] << std::endl;
    return (container[container.size() - 1] - container[0]);
}

unsigned int Span::shortestSpan( void ) {
    std::vector<int> container(lst.begin(), lst.end());
    if (container.size() < 2)
        throw missingNumbers();
    int difference = container[container.size() - 1] - container[0];
    for (unsigned int i = 1;i < container.size();i++) {
        if (container[i] -  container[i - 1] < difference) {
            difference = container[i] -  container[i - 1];
        }
    }
    std::cout << difference << std::endl;

    return N;
}

void Span::generateContainer( void ) {
    
}

unsigned int Span::getN( void ) {
    return N;
}

void Span::print() {
    std::set<int>::iterator iter;
    for (iter = lst.begin(); iter != lst.end(); iter++) {
        std::cout << *iter << ", ";
    }
    std::cout << std::endl;
}
