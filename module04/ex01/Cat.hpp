/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:14:27 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/26 20:23:20 by jlimones         ###   ########.fr       */
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
};

#endif
