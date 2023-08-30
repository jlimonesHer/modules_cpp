/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:09:51 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/30 15:04:15 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::Base() {
}

Base::~Base() {
}

Base::Base(Base const &copy) {
    *this = copy;
}

Base	&Base::operator=(const Base &copy) {
    if (this != &copy) {
        *this = copy;
    }
    return *this;
}

Base* generate( void ) {
    int res = std::rand() % 3;
    switch (res)  
    {
    case 0:
        return new A;
    case 1:
        return new B;
    case 2:
        return new C;
    }
    return new Base;
}

void identify(Base* p) {
    if (dynamic_cast<A *>(p))
        std::cout << "the object is of type A\n";
    else if (dynamic_cast<B *>(p))
        std::cout << "the object is of type B\n";
    else if (dynamic_cast<C *>(p))
        std::cout << "the object is of type C\n";
    else
        std::cout << "the object is of type Base\n";
}

void identify(Base& p) {
    try {
        A &a = dynamic_cast<A &>(p);
        std::cout << "Reference type A\n";
        (void) a;
        return ;
    } catch (std::exception& e) {
    }
    try {
        B &b = dynamic_cast<B &>(p);
        std::cout << "Reference type B\n";
        (void) b;
        return ;
    } catch (std::exception& e) {
    }
    try {
        C &c = dynamic_cast<C &>(p);
        std::cout << "Reference type C\n";
        (void) c;
        return ;
    } catch (std::exception& e) {}
}