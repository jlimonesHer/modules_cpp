/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:11:01 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/29 19:43:37 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

# include <iostream>

class Data
{
    private:
        int value;
    public:
        Data();
        Data(int _value);
        ~Data();
        Data(Data const &copy);
        Data	&operator=(Data const &copy);

        int getValue( void ) const;
};

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);

#endif
