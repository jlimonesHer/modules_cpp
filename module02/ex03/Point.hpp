/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:33:36 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/12 19:59:33 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Point_HPP
#define Point_HPP

# include <iostream>
# include "Fixed.hpp"

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        ~Point();
        Point(Point const &copy);
        Point	&operator=(Point const &copy);

        Point(const Fixed x, const Fixed y);
        Fixed getPointX( void );
        Fixed getPointY( void );
};

#endif
