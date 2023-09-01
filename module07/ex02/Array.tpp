/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:39:16 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/01 14:59:43 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP
#include "Array.hpp"

template <class T>
Array<T>::Array():size(0), array(0) {
}

template <class T>
Array<T>::Array(unsigned int _size): size(_size) {
    array = new T[size]();
}

template <class T>
Array<T>::~Array() {
}

template <class T>
Array<T>::Array(Array const &copy) {
    
    if (this != &copy) {
        array = copy.array;
        this->size = copy.size;
    }
}

template <class T>
Array<T>	&Array<T>::operator=(const Array<T> &copy) {
    if (this != &copy) {
        array = copy.array;
        this->size = copy.size;
    }
    return (*this);
}

template <class T>
const char* Array<T>::overflow::what() const throw() {
    return ("Exception: Overflow");
}

template <class T>
T   &Array<T>::operator[](unsigned int index) {
    if (index > size)
        throw Array::overflow();
    return (array[index]);
}

template <class T>
unsigned int Array<T>::getSize( void ) const {
    return (size);
}

#endif