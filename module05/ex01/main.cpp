/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:55:56 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/19 18:24:57 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>

int main()
{   
    try {
        Bureaucrat one("one", 148);
        //Bureaucrat two("two", 151);
        Bureaucrat three("three", 2);
        
        // std::cout << one;
        // one.decrementGrade();
        // std::cout << one;
        // one.decrementGrade();
        // std::cout << one;
        // one.decrementGrade();
        // std::cout << one;
        
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