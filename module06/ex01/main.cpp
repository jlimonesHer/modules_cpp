/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 11:15:30 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/30 11:04:11 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

int main ( void ) {
    Data a(25);
    uintptr_t b;
    Data *c;
    
    std::cout << "Original Data pointer: " << &a << " value = " << a.getValue() << std::endl;
    b = Serializer::serialize(&a);
    std::cout << "Serialize value: " << b << std::endl;
    c = Serializer::deserialize(b);
    std::cout << "Data pointer after deserialize: " << c << " value = " << c->getValue() << std::endl;

}