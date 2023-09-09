/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 10:50:29 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/09 19:44:53 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]) {
    std::string date = "2021-12-12";
    if (argc != 2) {
        std::cout << "Error: could not open file." << std::endl;
        return 1;
    }
    BitcoinExchange a(argv[1]);
    a.readDatabase();
    a.parserDate(date);
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