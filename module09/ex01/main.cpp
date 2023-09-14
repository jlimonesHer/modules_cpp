/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:54:19 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/14 10:46:25 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main (int argc, char *argv[]) {
    if (argc != 2) {
        std::cout << "Missing arguments" << std::endl;
        return 1;
    }
    RPN a;
    a.insertNumber(argv[1]);
    
    return (0);
}