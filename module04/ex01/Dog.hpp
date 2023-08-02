/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:24:46 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/27 17:54:10 by jlimones         ###   ########.fr       */
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
};

#endif