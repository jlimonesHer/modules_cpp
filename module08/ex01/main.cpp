/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:20:26 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/07 21:36:59 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
    Span a(5);
    a.addNumber(1);
    a.addNumber(8);
    a.addNumber(13);
    a.addNumber(9);
    a.addNumber(20);
    a.addNumber(21);
    for (unsigned int i = 0;i < a.getN(); i++)
        std::cout << a.getLst(i) << std::endl;
    return 0;
}