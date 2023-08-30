/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:09:16 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/30 14:49:32 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

# include <iostream>

class Base
{
    private:

    public:
        Base();
        virtual ~Base();
        Base(Base const &copy);
        Base	&operator=(Base const &copy);
};
void identify(Base* p);
void identify(Base& p);
Base*   generate( void );

#endif
