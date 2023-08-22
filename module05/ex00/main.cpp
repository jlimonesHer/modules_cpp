/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:55:56 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/22 09:58:37 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>

int main()
{   
    Bureaucrat one("one", 148);
    Bureaucrat three("three", 2);
    
    try {
        Bureaucrat two("two", 151);
    } catch(std::exception& exception) {
        std::cout << exception.what() << std::endl;
    }
        
    try {
        std::cout << one;
        one.decrementGrade();
        std::cout << one;
        one.decrementGrade();
        std::cout << one;
        one.decrementGrade();
        std::cout << one;
    }
     catch(std::exception& exception) {
        std::cout << exception.what() << std::endl;
    }
        
    try {
        std::cout << three;
        three.incrementGrade();
        std::cout << three;
        three.incrementGrade();
        std::cout << three;
        three.incrementGrade();
        std::cout << three;
        }
    catch(std::exception& exception) {
        std::cout << exception.what() << std::endl;
    }

    return 0;
}