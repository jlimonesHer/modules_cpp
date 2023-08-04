/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:16:38 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/02 13:17:08 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void leaks()
{
    system("leaks -q animal");
}

// int main()
// {
//     atexit(leaks);
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     delete j;//should not create a leak
//     delete i;
//     return 0;
// }

int main ( void )
{
    atexit(leaks);
    int numberAnimal = 10;
    Animal *zoo[numberAnimal];
    
    //Animal misi;
    //misi.makeSound();

    for (int i = 0;i < numberAnimal; i++)
    {
        if (i % 2 == 0)
        {
            std::cout << "\033[0;32m" ;
            zoo[i] = new Dog();
        }
        else
        {
            std::cout << "\033[0;33m" ;
            zoo[i] = new Cat();
        }
        std::cout << "\033[m" ;
    }
    for (int i = 0;i < numberAnimal; i++)
    {
        std::cout << "\033[0;34m" ;
        zoo[i]->makeSound();
        std::cout << "\033[m" ;
    }
    for (int i = 0;i < numberAnimal; i++)
    {
        std::cout << "\033[0;31m" ;
        delete zoo[i];
        std::cout << "\033[m" ;
    }
    return 0;
}