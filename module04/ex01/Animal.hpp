/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:07:00 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/29 09:53:24 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_HPP
#define Animal_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
    protected:
        std::string _type;
        Brain *brain;
    public:
        Animal();
        virtual ~Animal();
        Animal(Animal const &copy);
        Animal	&operator=(Animal const &copy);
        std::string getType( void ) const;
        void makeSound( void )const;
        std::string getIdeas(int i);
        void setIdeas(int i, std::string newIdea);
};

#endif
