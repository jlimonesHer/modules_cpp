/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:11:01 by jlimones          #+#    #+#             */
/*   Updated: 2023/08/30 10:38:54 by jlimones         ###   ########.fr       */
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

#endif
