/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:18:22 by jlimones          #+#    #+#             */
/*   Updated: 2023/09/08 16:49:56 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <algorithm>

class NotFound: public std::exception 
{
    virtual const char *what() const throw(){ return "Not found";}
};

template<typename T>
typename T::iterator easyfind(T& container, int number) {
    typename T::iterator position = std::find(container.begin(), container.end(), number);
    if (position == container.end())
        throw NotFound();
    return  (position);
}

#endif
