/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:17:46 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/08 16:56:50 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main ( void ) {
    std::vector<int> numbers;
    
    for (int i = 0;i < 50;i++) {
        numbers.push_back(i);
    }
    
    try {
        std::vector<int>::iterator vect = easyfind(numbers, 3);
        std::cout << *vect << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() <<std::endl;
    }
    
    try {
        std::vector<int>::iterator vect = easyfind(numbers, 20);
        std::cout << *vect << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() <<std::endl;
    }
    
    try {
        std::vector<int>::iterator vect = easyfind(numbers, -1);
        std::cout << *vect << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() <<std::endl;
    }
    
    try {
        std::vector<int>::iterator vect = easyfind(numbers, 50);
        std::cout << *vect << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() <<std::endl;
    }
    return 0;
}