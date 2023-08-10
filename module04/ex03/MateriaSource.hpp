/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:05:38 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/10 12:42:02 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    private:
        int learnt;
        AMateria *inventory[MAX_SLOT];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(MateriaSource const &copy);
        MateriaSource	&operator=(MateriaSource const &copy);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif
