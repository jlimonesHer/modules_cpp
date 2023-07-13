/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:10:28 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/13 18:31:54 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed TrianguleArea(Point const a, Point const b, Point const c)
{
    Fixed ax = a.getPointX().toFloat();
    Fixed ay = a.getPointY().toFloat();
    Fixed bx = b.getPointX().toFloat();
    Fixed by = b.getPointY().toFloat();
    Fixed cx = c.getPointX().toFloat();
    Fixed cy = c.getPointY().toFloat();
    Fixed area(((ax * (by -cy)) + (bx * (cy -ay)) + (cx * (ay - by))) * (0.5f));
    if (area < 0)
        return (area * -1);
    return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed totalArea(TrianguleArea(a, b, c));
    Fixed area1 = TrianguleArea(a, b, point);
    Fixed area2 = TrianguleArea(b, c, point);
    Fixed area3 = TrianguleArea(c, a, point);
    Fixed sumArea = area1 + area2 + area3;
    if (area1.getRawBits() && area2.getRawBits() && area3.getRawBits() &&
        totalArea == sumArea)
        return (true);
    return (false);
}