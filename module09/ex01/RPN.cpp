/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:31:53 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/14 12:35:22 by jlimones         ###   ########.fr       */
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

static std::string removeSpace(std::string input) {
    std::string inputWithoutSpaces;

    for(size_t i = 0;i < input.length();i++) {
        if (input[i] == ' ') {
            break ;
        }
        else {
            inputWithoutSpaces += input[i];
        }
    }
    return (inputWithoutSpaces);
}

static bool isOperands(char c) {
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return 1;
    return 0;
}

bool RPN::parserInput(std::string input) {
    std::string inputWithoutSpaces;
    //std::cout << input << std::endl;
    inputWithoutSpaces = removeSpace(input);
    for (size_t i = 0;i < inputWithoutSpaces.length();i++) {
        if (!isdigit(inputWithoutSpaces[i]) && !isOperands(inputWithoutSpaces[i]))
            return 0;
        else if (isdigit(inputWithoutSpaces[i])) {
            operands.push(std::atoi(inputWithoutSpaces.c_str()));
        } else if (isOperands(inputWithoutSpaces[i]))
            operands.push(std::atoi(inputWithoutSpaces.c_str()));
    }
        while (!operands.empty()) {
        int elemento = operands.top(); // Obtener el elemento en la parte superior
        std::cout << elemento << " "; // Procesar el elemento (en este caso, imprimirlo)
        operands.pop(); // Eliminar el elemento en la parte superior de la pila
    }
    return 1;
}

bool RPN::saveInput(std::string input) {
    if (!parserInput(input)) {
        return 0;
    }
    return 1;
}