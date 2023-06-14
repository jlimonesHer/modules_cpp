/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:20:55 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/14 16:46:54 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
	std::string &stringREF = str;

    std::cout << "Memory address: " << &str << std::endl;
    std::cout << "Memory address: " << &(*stringPTR) << std::endl;
    std::cout << "Memory address: " << &stringREF << std::endl << std::endl;
    std::cout << "variable value: " << str << std::endl;
    std::cout << "stringPTR pointed value: " << *stringPTR << std::endl;
    std::cout << "stringREF pointed value: " << stringREF << std::endl << std::endl;
    return 0;
}