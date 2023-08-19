/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:55:56 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/19 12:51:02 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>

using namespace std;

int main()
{
    string s = "Hola";

    try {
        cout << s.at(100) << endl;
        }
    catch(exception& e) {
        cout << e.what() << endl;
    }

    //cin.get();
    return 0;
}