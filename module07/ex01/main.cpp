/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:35:05 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/01 15:08:55 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

void power2(int param) {
   std::cout << param * param << " ";
}

char upperCase(char c) {
		c = std::toupper(c);
	return (c);
}

void    print(char c)
{
    std::cout << c ;
}

int main ( void ) {
    char a[4] = "abc";
    int num[10] = {1,2,3,4,5,6,7,8,9,10};
    iter(num, 10, power2);
    std::cout << std::endl;
    iter(a, 4, upperCase);
    iter(a, 4, print);
}
