/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:09:40 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/12 20:00:46 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
}

Point::~Point()
{
}

Point::Point(Point const &copy)
{
    *this = copy;
}



Fixed Point::getPointX( void )
{
    return (x);
}

Fixed Point::getPointY( void )
{
    return (y);
}
Point	&Point::operator=(const Point &copy)
{
	(void)copy;
	return (*this);
}