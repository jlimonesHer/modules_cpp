/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:15:55 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/20 16:05:04 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
    std::string str;
    int i;

    if (argc != 2)
        return 1;
    if (argv[1])
    {
        str = argv[1];
        for (i = 0; argv[1][i]; i++)
            str[i] = toupper(argv[1][i]);
        std::cout << str << std::endl;
    }
    return (0);
}