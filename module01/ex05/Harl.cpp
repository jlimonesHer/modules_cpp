/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <josec.limones@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:24:35 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/19 10:57:47 by jlimones         ###   ########.fr       */
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

void	Harl::complain(std::string level)
{
	std::string	levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
		""
	};
	void	(Harl::*ptrs[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	int	key;
	for (key = 0; levels[key] != level; key++)
	{
		if (levels[key] == "")
		{
			std::cout << "Level not found\n";
			return ;
		}
	}
	(this->*ptrs[key])();
}