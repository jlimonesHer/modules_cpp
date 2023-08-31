/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:37:07 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/31 18:58:00 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

# include <iostream>

template <typename Type> void iter(Type* array, int len, Type (*f)(Type)) {
    for (int i = 0;i < len;i++)
        array[i] = f(array[i]);
}
template <typename Type> void iter(Type* array, int len, void (*f)(Type)) {
    for (int i = 0;i < len;i++) {
        f(array[i]);
        }
}


#endif