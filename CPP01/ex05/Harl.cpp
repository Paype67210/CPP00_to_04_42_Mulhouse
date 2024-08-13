/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:16:17 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/06 11:28:57 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#define RED "\033[1;31m"
#define ORANGE "\033[1;33m"
#define GREEN "\033[1;32m"
#define BLUE "\033[1;34m"
#define RESET "\033[0m"

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
    std::cout << "Debug: this is a " << GREEN << "debug message" << RESET << std::endl;
}

void Harl::info() const
{
    std::cout << "Info: this is an " << BLUE << "info message" << RESET << std::endl;
}

void Harl::warning() const
{
    std::cout << "Warning: this is a " << ORANGE << "warning message" << RESET << std::endl;
}

void Harl::error() const
{
    std::cout << "Error: this is an " << RED << "error message" << RESET << std::endl;
}
