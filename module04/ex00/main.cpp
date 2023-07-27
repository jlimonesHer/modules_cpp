/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:16:38 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/27 18:34:07 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void leaks()
{
    system("leaks -q animal");
}

int main()
{
    atexit(leaks);
    std::cout << "---------Constructor Called---------" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* a = new WrongCat();
    std::cout << "---------Type Called---------" << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << a->getType() << " " << std::endl;
    std::cout << "---------Sound Called---------" << std::endl;
    j->makeSound();
    i->makeSound(); //will output the cat sound!
    meta->makeSound();
    a->makeSound();
    std::cout << "---------Destructor Called---------" << std::endl;
    delete j;
    delete i;
    delete meta;
    delete a;
    return 0;
}