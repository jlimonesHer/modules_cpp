/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:19:37 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/04 17:14:27 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <iostream>

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria();
        AMateria( std::string const& type );
        ~AMateria();
        AMateria( AMateria const &copy );
        AMateria	&operator=(AMateria const &copy);
        /*****getters & setters***/
        std::string const& getType( void )const;
        virtual AMateria* clone( void ) const = 0;
        virtual void use(ICharacter& target);
};

#endif
