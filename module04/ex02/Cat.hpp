/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:14:27 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/10 19:05:43 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat: public Animal
{
    private:

    public:
        Cat();
        ~Cat();
        Cat(Cat const &copy);
        Cat	&operator=(Cat const &copy);
        std::string getType( void ) const;
        void makeSound( void ) const;
};

#endif
