/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:07:00 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/10 19:02:42 by jlimones         ###   ########.fr       */
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
        Animal(Animal const &copy);
        Animal	&operator=(Animal const &copy);
        virtual ~Animal() = 0;
        std::string getType( void ) const;
        virtual void makeSound( void )const = 0;
        std::string getIdeas(int i);
        void setIdeas(int i, std::string newIdea);
};

#endif
