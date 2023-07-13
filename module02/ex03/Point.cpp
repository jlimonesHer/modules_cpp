/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:09:40 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/13 17:38:19 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
}

Point::~Point()
{
}

Point::Point(Point const &copy):x(copy.x), y(copy.y)
{
}

Point::Point(const float x, const float y):x(Fixed(x)), y(Fixed(y))
{
}

Fixed Point::getPointX( void ) const
{
    return (this->x);
}

Fixed Point::getPointY( void ) const
{
    return (this->y);
}
Point	&Point::operator=(const Point &copy)
{
	(void)copy;
	return (*this);
}
