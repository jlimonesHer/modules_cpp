/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:24:46 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/10 19:06:29 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog: public Animal
{
    private:

    public:
        Dog();
        ~Dog();
        Dog(Dog const &copy);
        Dog	&operator=(Dog const &copy);
        std::string getType( void ) const;
        void makeSound( void ) const;
};

#endif