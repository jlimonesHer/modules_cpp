/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 13:11:25 by jlimones          #+#    #+#             */
/*   Updated: 2023/07/12 17:56:48 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	// More tests
	// Fixed	x(3.14f);
	// Fixed	y(42);
	
	// std::cout << "\nTests\n";
	// std::cout << x << " + " << y << " = " << x + y << "\n";
	// std::cout << x << " - " << y << " = " << x - y << "\n";
	// std::cout << x << " * " << y << " = " << x * y << "\n";
	// std::cout << y << " / " << x << " = " << y / x << "\n";
	// std::cout << "40.42 > 42.40: " << (Fixed(40.42f) > Fixed(42.40f)) << "\n";
	// std::cout << "42.40 > 42.40: " << (Fixed(42.40f) > Fixed(42.40f)) << "\n";
	// std::cout << "40.42 < 42.40: " << (Fixed(40.42f) < Fixed(42.40f)) << "\n";
	// std::cout << "42.40 < 42.40: " << (Fixed(42.40f) < Fixed(42.40f)) << "\n";
	// std::cout << "40.42 >= 42.40: " << (Fixed(40.42f) >= Fixed(42.40f)) << "\n";
	// std::cout << "42.40 >= 42.40: " << (Fixed(42.40f) >= Fixed(42.40f)) << "\n";
	// std::cout << "40.42 <= 42.40: " << (Fixed(40.42f) <= Fixed(42.40f)) << "\n";
	// std::cout << "42.40 <= 42.40: " << (Fixed(42.40f) <= Fixed(42.40f)) << "\n";
	// std::cout << "40.42 == 42.40: " << (Fixed(40.42f) == Fixed(42.40f)) << "\n";
	// std::cout << "42.42 == 42.42: " << (Fixed(42.42f) == Fixed(42.42f)) << "\n";
	// std::cout << "40.42 != 42.40: " << (Fixed(40.42f) != Fixed(42.40f)) << "\n";
	// std::cout << "42.42 != 42.42: " << (Fixed(42.42f) != Fixed(42.42f)) << "\n";

	// return (0);
}