/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:55:56 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/20 12:35:11 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string>

int main()
{   
    try
    {
        Bureaucrat br1("br1", 22);
        Form one("one", 20, 3);
        std::cout << br1; 
        std::cout << one; 
        br1.signForm(one);
        std::cout << one; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    /************************/

    try {
        Bureaucrat br2("br2", 1);
        std::cout << br2; 
        Form two("two", 20, 100);
        std::cout << two;
        two.beSigned(br2);
        std::cout << two;
    }
    catch(std::exception& e) {
        std::cout << e.what() << '\n';
    }

    return 0;
}