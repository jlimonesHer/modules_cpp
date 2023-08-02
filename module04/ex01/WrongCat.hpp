/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:06:48 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/27 18:24:15 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    private:

    public:
        WrongCat();
        ~WrongCat();
        WrongCat(WrongCat const &copy);
        WrongCat	&operator=(WrongCat const &copy);
        std::string getType( void ) const;
};

#endif