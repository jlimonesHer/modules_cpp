/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:31:53 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/14 17:59:22 by jlimones         ###   ########.fr       */
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

static bool isOperands(char c) {
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return 1;
    return 0;
}

static int calculator(int a, int b, char operand) {
    int result = 0;
    
    if (operand == '+') {
        result = a + b;    
    } else if (operand == '-') {
        result = a - b;
    } else if (operand == '*') {
        result = a * b;
    } else if (operand == '/') {
        result = a / b;
    }
    return result;
}

void RPN::parserInput(std::string input) {
    int a = 0;
    int b = 0;
    for (size_t i = 0; input[i]; i++) {
        if (!isdigit(input[i]) && !isOperands(input[i]) && !isspace(input[i])) {
            std::cout << "Error\n";
            return ;
        }
        if (isdigit(input[i])) {
            operands.push(input[i] - 48);
        }
        if (isOperands(input[i])) {
            if (operands.size() > 1) {
                b = operands.top();
                operands.pop();   
                a = operands.top();
                operands.pop();
                operands.push(calculator(a, b, input[i]));
            } else {
                std::cout << "Not enough numbers\n";
                return ;
            }
        } 
    }
    if (operands.size() != 1) {
        std::cout << "Invalid operation\n";
        return ;
    } else {
        std::cout << operands.top() << "\n";
        
    }
}
