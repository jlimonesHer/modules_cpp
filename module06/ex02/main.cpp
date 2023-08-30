/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:11:15 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/30 18:13:20 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void leaks()
{
    system("leaks -q Base");
}


int main ( void ) {
    atexit(leaks);
    std::srand(time(NULL));
    for (int i = 0;i < 8;i++) {
        Base *a;
        a = generate();
        identify(a);
        identify(*a);
        delete a;
    }
    
    return 0;
}