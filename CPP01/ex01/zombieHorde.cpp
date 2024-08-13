/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:22:14 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/06 08:48:51 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name) {
	Zombie	*who = new Zombie[N];
	
	int	i = 0;
	while (i < N) {
		std::ostringstream oss;
		oss << name << (i + 1);
		who[i++].setName(oss.str());
	}
	return (who);
}
