/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:25:14 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/31 13:41:14 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

# include <iostream>

template <typename Type> 
    void swap(Type& data1, Type& data2) {
        Type tmp;
        tmp = data1;
        data1 = data2;
        data2 = tmp;
    }

template <typename Type> Type min(Type& data1, Type& data2) {
    return (data1 <= data2 ? data1 : data2);
}

template <typename Type> Type max(Type& data1, Type& data2) {
    return (data2 >= data1 ? data2 : data1);
}

#endif
