/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 15:05:15 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/08 15:55:01 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <class T>
MutantStack<T>::MutantStack()
{
}

template <class T>
MutantStack<T>::~MutantStack()
{
}

template <class T>
MutantStack<T>::MutantStack(MutantStack<T> const &copy): std::stack<T>(copy)
{
    
}

template <class T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack<T> &copy)
{
    if (this != &copy)
        *this = copy;
    return *this;
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
    return (this->c.begin());
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
    return (this->c.end());
}

