/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:33:36 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/13 17:30:54 by jlimones         ###   ########.fr       */
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
        Point(const float x, const float y);
        
        Point	&operator=(Point const &copy);
        Fixed getPointX( void ) const;
        Fixed getPointY( void )const;
};

Fixed TrianguleArea(Point const a, Point const b, Point const c);
bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif
