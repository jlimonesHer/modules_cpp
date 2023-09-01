/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:21:54 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/01 13:18:10 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP


# include <iostream>

template <class T>
class Array
{
    private:
        unsigned int    size;
        T               *array;
    public:
        Array();
        Array(unsigned int size);
        ~Array();
        Array(Array const &copy);
        Array	&operator=(Array const &copy);
        T	&operator[](unsigned int index);

        class overflow: public std::exception {
		virtual const char	*what() const throw();
	};
        unsigned int getSize( void ) const;
};

# include "Array.tpp"
#endif
