/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 10:12:04 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/05 09:22:48 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; ++i) {
			for (size_t j = 0; j < strlen(argv[i]); ++j)
				std::cout << (char)std::toupper(argv[i][j]);
			std::cout << ' ';
		}
		std::cout << std::endl;
	}
	return (0);
}
