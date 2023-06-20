/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:24:12 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/20 12:36:51 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char const **argv)
{
    Harl args;

    if (argc != 2){
        std::cout << "Missing an argument" << std::endl;
        return 1;
    }
    std::cout << "\033[0;32mCall " << "[" << argv[1] << "]" << " level:\033[m\n";
    args.complain(argv[1]);
    return 0;
}
