/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:31:53 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/14 11:38:43 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::~RPN()
{
}

RPN::RPN(RPN const &copy):operands(copy.operands)
{
}

RPN	&RPN::operator=(const RPN &copy)
{
    if (this != &copy)
        operands = copy.operands;
    return *this;
}

// static std::string removeSpace(std::string input) {
//     std::string inputWithoutSpaces;

//     for(size_t i = 0;i < input.length();i++) {
//         if (input[i] == ' ') {
//             continue ;
//         }
//         else {
//             inputWithoutSpaces += input[i];
//         }
//     }
//     return (inputWithoutSpaces);
// }

static bool isOperands(char c) {
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return 1;
    return 0;
}

static std:string findNextOperand(std::)

void RPN::insertNumber(std::string input) {
    std::string num;
    std::string operand;

    for (size_t i = 0; i < input.size();i++) {
        if (isOperands(input[i])) {
            operand = input[i];
            break ;
        }
    }
    for (size_t i = 0; i < input.size();i++) {
        std::cout << i << "\n";
        if (isspace(input[i])) {
            num += operand;
            while (!isdigit(input[i]))
                i++;
        }
        if (isOperands(input[i])) {
            num += operand;
        if (input[i] != operand[0] && !isdigit(input[i]) && !isspace(input[i])) {
            operand = input[i];
            std::cout << "!operand: "  << input[i] << "\n";
        }
        std::cout << "operand: " << input[i] << "\n";
        }
        if (isdigit(input[i])) {
        std::cout << "isdigit: " << input[i] << "\n";
            num += input[i];
        }
        std::cout << "------------" << std::endl;
    }
    std::cout << num << std::endl;
}

// bool RPN::isInputValid(std::string input) {
//     for (size_t i = inputWithoutSpaces.size() - 1;i < inputWithoutSpaces.length();i--) {
//         if (!isspace(input[i]) && !isOperands(input[i]) && !isdigit(input[i]))
//             return 0;
//     }
//     return 1;
// }

// bool RPN::saveNumber(std::string number) {
//     std::string str;

//     for (size_t i = 0;i < number.size();i++) {
//     if (isdigit(input))
//         str = subInput(input);
//     }
//     return 1;
// }

// bool RPN::saveInput(std::string input) {
//     if (!parserInput(input)) {
//         return 0;
//     }
//     return 1;
// }