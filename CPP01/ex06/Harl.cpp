/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:16:17 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/06 12:37:49 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}   

void Harl::complain(std::string level) const
{
   void (Harl::*LevelPTR[4])() const = {&Harl::debug, &Harl::info, \
	&Harl::warning, &Harl::error};
	std::string LevelName[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (level == LevelName[i])
		{
			(this->*LevelPTR[i])();
			return;
		}
	}
}

void Harl::debug() const
{
	std::cout << GREEN << "[ DEBUG ]" << RESET << std::endl;
	std::cout << "This is a " << GREEN << "debug message" << RESET << std::endl;
}

void Harl::info() const
{
	std::cout << BLUE << "[ INFO ]" << RESET << std::endl;
	std::cout << "This is an " << BLUE << "info message" << RESET << std::endl;
}

void Harl::warning() const
{
	std::cout << ORANGE << "[ WARNING ]" << RESET << std::endl;
	std::cout << "This is a " << ORANGE << "warning message" << RESET << std::endl;
}

void Harl::error() const
{
	std::cout << RED << "[ ERROR ]" << RESET << std::endl;
	std::cout << "This is an " << RED << "error message" << RESET << std::endl;
}
