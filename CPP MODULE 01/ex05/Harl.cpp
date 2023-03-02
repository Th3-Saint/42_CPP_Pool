/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 05:09:18 by mrobaii           #+#    #+#             */
/*   Updated: 2023/02/17 05:40:51 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug( void )
{
	std::cout << "Debug: This is a debug message\n";
}

void Harl::info( void )
{
	std::cout << "Info: This is a info message\n";
}

void Harl::warning( void )
{
	std::cout << "Warning: This is a warning message\n";
}

void Harl::error( void )
{
	std::cout << "Error: This is a error message\n";
}

void Harl::complain(std::string level)
{
	void (Harl::*ptr[])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"debug", "info", "warning", "error"};
	std::size_t index = sizeof(levels) / sizeof(level[0]);
	bool levelFound = false;

	for (std::size_t i = 0; i < index; i++)
	{
		if (levels[i] == level)
		{
			(this->*ptr[i])();
			levelFound = true;
			break;
		}
	}
	if(!levelFound)
		std::cout << "Unkown level\n";
}