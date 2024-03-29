/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:53:43 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/10 12:31:46 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

# include <iostream>
#include "AMateria.hpp"

class Cure: public AMateria
{
    private:

    public:
        Cure();
        ~Cure();
        Cure(Cure const &copy);
        Cure	&operator=(Cure const &copy);
        void use(ICharacter& target);
        AMateria* clone() const;
};

#endif
