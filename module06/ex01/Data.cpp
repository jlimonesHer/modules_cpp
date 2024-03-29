/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:10:43 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/30 10:34:57 by jlimones         ###   ########.fr       */
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
