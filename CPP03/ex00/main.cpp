/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:50:53 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/18 18:06:41 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	ClapTrap Myra = ClapTrap("Myra");
	ClapTrap Arthur = ClapTrap();
	Arthur.setName("Arthur");

	Myra.status();
	Myra.attack("something");
	Myra.setAttackDamage(4);
	
	std::cout << GREEN << std::endl << "--- Myra attacks Arthur, Arthur heals to full ---" << std::endl << std::endl;
	Myra.attack(Arthur);
	Myra.status();
	Arthur.status();
	Arthur.beRepaired(3);
	Arthur.beRepaired(3);
	
	std::cout << RED << std::endl << "--- Myra attacks Arthur to death, Arthur can't heal ---" << std::endl << std::endl;
	Myra.attack(Arthur);
	Myra.attack(Arthur);
	Myra.attack(Arthur);
	Arthur.beRepaired(3);
	
	std::cout << BLUE <<std::endl << "--- Copying Myra into new ClapTrap William ---" << std::endl << std::endl;
	ClapTrap William = Myra;
	William.status();
	William.setName("William");
	William.status();
	William.attack(Myra);
	
	std::cout << YELLOW << std::endl << "--- Setting Energy to 1 ---" << std::endl << std::endl;
	William.setEnergyPoints(1);
	William.status();
	William.attack(Myra);
	William.attack(Myra);
	Myra.attack(William);
	William.beRepaired(3);

	std::cout << MAGENTA << std::endl << "--- Setting HitPoints to 0 ---" << std::endl << std::endl;
	Arthur.setHitPoints(6);
	Arthur.setEnergyPoints(5);
	Arthur.setAttackDamage(0);
	Arthur.status();
	Arthur.attack(William);
	William.status();
		
	std::cout << DEFAULT << std::endl;
}