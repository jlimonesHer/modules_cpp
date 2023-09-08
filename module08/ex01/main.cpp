/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:20:26 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/08 14:31:30 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
    Span a(100);
    Span b(1);
    srand(time(NULL));
    std::cout << "**-------------------------**\n";
    try {
        for (unsigned int i = 0;i < a.getN();i++) {
            const int value = rand() % 1000;
            a.addNumber(value);
        }
        //a.print();
        a.shortestSpan();
        a.longestSpan();
    } catch (std::exception& e) {
        std::cout << e.what() <<std::endl;
    }
    std::cout << "**-------------------------**\n";
    try {
        for (unsigned int i = 0;i < b.getN();i++) {
            const int value = rand() % 1000;
            b.addNumber(value);
        }
        //b.print();
        b.shortestSpan();
        b.longestSpan();
    } catch (std::exception& e) {
        std::cout << e.what() <<std::endl;
    }
    std::cout << "**-------------------------**\n";
    try {
        for (unsigned int i = 0;i < a.getN();i++) {
            const int value = rand() % 1000;
            a.addNumber(value);
        }
        //a.print();
        a.shortestSpan();
        a.longestSpan();
    } catch (std::exception& e) {
        std::cout << e.what() <<std::endl;
    }
    return 0;
}