/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:10:43 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/29 19:43:50 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(): value(0) {
}

Data::Data(int _value): value(_value) {
}

Data::~Data()
{
}

Data::Data(Data const &copy)
{
    *this = copy;
}

Data	&Data::operator=(const Data &copy) {
    if (this != &copy) {
        *this = copy;
    }
    return *this;
}

int Data::getValue( void ) const {
    return (this->value);
}


uintptr_t serialize(Data *ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data *>(raw));
}