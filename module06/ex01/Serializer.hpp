/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:19:52 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/30 18:10:00 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

# include <iostream>
# include "Data.hpp"

class Serializer
{
    private:
        Serializer();

    public:
        ~Serializer();
        Serializer(Serializer const &copy);
        Serializer	&operator=(Serializer const &copy);
        static uintptr_t serialize(Data *ptr);
        static Data *deserialize(uintptr_t raw);
};

#endif
