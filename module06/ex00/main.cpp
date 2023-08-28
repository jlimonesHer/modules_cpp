/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 18:36:14 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/28 10:54:45 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char const *argv[])
{
    std::cout << argv[0] <<'\n';
    if (argc != 2)
        return (std::cout << "The number of arguments is not valid\n" , 1);
    ScalarConverter a(argv[1]);
    return 0;
}
