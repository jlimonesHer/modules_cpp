/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:52:08 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/04 16:56:41 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice: public AMateria
{
    private:

    public:
        Ice();
        ~Ice();
        Ice(Ice const &copy);
        Ice	&operator=(Ice const &copy);
};

#endif
