/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:24:12 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/19 11:03:39 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char const **argv)
{
    Harl args;

    if (argc != 2)
        return 1;
    else {
        std::cout << "\033[0;32mCall DEBUG level:\033[m\n";
    	args.complain("DEBUG");
        std::cout << "\n\033[0;36mCall INFO level:\033[m\n";
        args.complain("INFO");
        std::cout << "\n\033[0;33mCall WARNING level:\033[m\n";
        args.complain("WARNING");
        std::cout << "\n\033[0;31mCall ERROR Level:\033[m\n";
        args.complain("ERROR");
    }
    return 0;
}
