/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 11:15:30 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/29 20:01:37 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main ( void ) {
    Data a(25);
    uintptr_t b;
    Data *c;
    
    b = serialize(&a);
    c = deserialize(b);
    std::cout << "Address a = " << &a << " value = " << a.getValue() << std::endl;
    std::cout << "Address b = " << &b << " value = " << b << std::endl;
    std::cout << "Address c = " << c << " value = " << c->getValue() << std::endl;

}