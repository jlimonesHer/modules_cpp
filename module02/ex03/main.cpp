/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 13:11:25 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/13 18:33:03 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main(void)
{
	Point a = Point(0.0f, 0.0f);
	Point b = Point(2.5f, 2.0f);
	Point c = Point(5.0f, 0.0f);

	Point p1 = Point(2.5f, 1.0f); // dentro
	Point p2 = Point(0, 1.04761905); // en la linea
	Point p3 = Point(2.5, 0); // fuera
	Point p4 = Point(2, -2); // en el vertice
	
	std::cout << "p1: " << bsp(a, b, c, p1) << std::endl;
	std::cout << "p2: " << bsp(a, b, c, p2) << std::endl;
	std::cout << "p3: " << bsp(a, b, c, p3) << std::endl;
	std::cout << "p4: " << bsp(a, b, c, p4) << std::endl;
	return (0);
}
