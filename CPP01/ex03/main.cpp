/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 09:32:23 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/06 09:54:44 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
	{
		Weapon club = Weapon("Crude spiked club");
		HumanA player1("Arthur", club);
		player1.attack();
		club.setType("some other type of club");
		player1.attack();
	}
	{
		Weapon club = Weapon("Crude spiked club");
		HumanB player2("Myra");
		player2.attack();
		player2.setWeapon(club);
		player2.attack();
		club.setType("Some other type of club");
		player2.attack();
	}
	return (0);
}
