/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:24:35 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/20 12:38:56 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << DEBUG << std::endl << std::endl;
}

void Harl::info(void)
{
	std::cout << INFO << std::endl << std::endl;
}

void Harl::warning(void)
{
	std::cout << WARNING << std::endl << std::endl;
}

void Harl::error(void)
{
	std::cout << ERROR << std::endl << std::endl;
}

int positionArray(std::string level)
{
	int key;

	switch (level[0])
	{
		case 'D':
			key = 0;
			break;
		case 'I':
			key = 1;
			break;
		case 'W':
			key = 2;
			break;
		case 'E':
			key = 3;
			break;
		default:
			key = 4;
	}
	return key;
}

void	Harl::complain(std::string level)
{
	std::string	levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};
	void	(Harl::*ptrs[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	int key = positionArray(level);
		switch (key)
	{
		case 0:
			(this->*ptrs[key])();
			key++;
		case 1:
			(this->*ptrs[key])();
			key++;
		case 2:
			(this->*ptrs[key])();
			key++;
		case 3:
			(this->*ptrs[key])();
			key++;
	}
}
