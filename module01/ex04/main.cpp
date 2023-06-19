/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:34:24 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/19 09:22:16 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

#include <iostream>
#include <fstream>
#include <string>

void replaceAllOccurrences(std::string &content, const std::string &s1, const std::string &s2) {
    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos) {
        content = content.substr(0, pos) + s2 + content.substr(pos + s1.length());
        pos += s2.length();
    }
}

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cout << "Usage: program <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream inputFile(filename.c_str());
    std::ofstream outputFile((filename + ".replace").c_str());
    std::string line;
    
    if (!inputFile) {
        std::cout << "Failed to open input file." << std::endl;
        return 1;
    }
    if (!outputFile) {
        std::cout << "Failed to create output file." << std::endl;
        return 1;
    }
    while (std::getline(inputFile, line)) {
        replaceAllOccurrences(line, s1, s2);
        outputFile << line << std::endl;
    }
    std::cout << "Replacement completed. Generated file: " << filename << ".replace" << std::endl;
    inputFile.close();
    outputFile.close();

    return 0;
}



