/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:54:19 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/14 12:32:49 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main (int argc, char *argv[]) {
    if (argc != 2) {
        std::cout << "Missing arguments" << std::endl;
        return 1;
    }
    RPN a;
    a.parserInput(argv[1]);
    
    return (0);
}