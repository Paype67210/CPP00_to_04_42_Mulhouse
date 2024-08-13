/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:26:59 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/06 12:31:33 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	find_index(std::string str)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	// std::string	level = str;
	
	for (int i = 0; i < 4; i++)
	{
		if (str == levels[i])
			return i;
	}
	return -1;
}

void	choose_level(char *str)
{
	Harl harl;
	int index = find_index(str);

	switch (index)
	{
	case 0:
		harl.complain("DEBUG");
		// fall through
	case 1:
		harl.complain("INFO");
		// fall through
	case 2:
		harl.complain("WARNING");
		// fall through
	case 3:	
		harl.complain("ERROR");
		break;
	default:
		std::cout << GREEN << "[ Probably complaining about insignificant problems ]" \
			<< RESET << std::endl;
			break;		
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << GREEN << "[ Probably complaining about insignificant problems ]" \
			<< RESET << std::endl;
	else
		choose_level(argv[1]);
	return 0;
}