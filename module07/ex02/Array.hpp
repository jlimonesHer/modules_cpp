/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:21:54 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/31 19:31:20 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>

template <class T>
class Array
{
    private:
       T    *array;
    public:
        Array();
        ~Array();
        Array(Array const &copy);
        Array	&operator=(Array const &copy);
};

#endif
