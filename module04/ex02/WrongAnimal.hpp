/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:31:01 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/27 18:28:52 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(WrongAnimal const &copy);
        WrongAnimal	&operator=(WrongAnimal const &copy);
        std::string getType( void ) const;
        void makeSound( void )const;
};

#endif
