/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:34:24 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/15 18:09:16 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    std::string s1 = "ffff";
    std::string s2 = "pppp";
    std::string input;
    std::ifstream myfile;
    std::ofstream foutput;
    myfile.open("aaaaa.txt");
    foutput.open("bbbbb.txt");
    while (std::getline(myfile, input)) {
        std::string line;
        size_t start = 0;
        size_t p = input.find(s1);
        if (p != std::string::npos) {
            input = input.substr(0, p) + s2 + input.substr(p + s1.size());
        }
        foutput << input << "\n";
    }
    myfile.close();
    foutput.close();
    return 0;
}