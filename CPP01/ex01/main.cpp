/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:17:59 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/06 08:42:38 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main() {
	int	i = 5;
	Zombie	*who;

	who = zombieHorde(i, "John Doe");
	for (int a = 0; a < i; a++) {
		who[a].announce();
	}
	delete[] who;
}
