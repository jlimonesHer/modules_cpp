/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 10:50:29 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/10 13:28:22 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]) {
    std::string input = argv[1];
    //std::cout << input << "\n";
    if (argc != 2) {
        std::cout << "Error: could not open file." << std::endl;
        return 1;
    }
    BitcoinExchange a(argv[1]);
    try {
    a.readDatabase();
    a.readInput(input);

    } catch(std::exception& e){
                std::cerr << e.what() << '\n';

    }
    return 0;
}

// #include <iostream>
// #include <ctime>
 
// using namespace std;
 
//        int
//        main(void)
//        {
//            struct tm tm;
//            char buf[255];

//            memset(&tm, 0, sizeof(tm));
//            strptime("2001-11-12 18:31:01", "%Y-%m-%d %H:%M:%S", &tm);
//            strftime(buf, sizeof(buf), "%Y-%m-%d", &tm);
//            puts(buf);
//            exit(EXIT_SUCCESS);
//        }