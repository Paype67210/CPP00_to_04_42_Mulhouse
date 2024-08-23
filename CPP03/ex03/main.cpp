/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 15:15:16 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/19 10:50:01 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    DiamondTrap Myra = DiamondTrap("Myra");
	std::cout << std::endl;
	FragTrap Arthur = FragTrap("Arthur");
	ScavTrap William = ScavTrap("William");
	ClapTrap Alex = ClapTrap("Alex");

	Myra.status();
	Arthur.status();
	William.status();
	Alex.status();
	
	std::cout << ORANGE << std::endl << "--- Special competences ---" << std::endl << std::endl;
	Myra.whoAmI();
	Myra.guardGate();
	Myra.highFivesGuys();
	Arthur.highFivesGuys();
	William.guardGate();
	Alex.attack("the air, because she can't do anything");
	
	std::cout << BLUE <<std::endl << "--- Attacks ---" << std::endl << std::endl;
	Myra.attack(Arthur);
	Arthur.attack(William);
	William.attack(Alex);
	Alex.attack(Myra);

	std::cout << YELLOW <<std::endl << "--- Copy assignment ---" << std::endl << std::endl;

	Arthur = Myra;
	William = Myra;
	Alex = William;
	
	Myra.status();
	Arthur.status();
	William.status();
	Alex.status();

	std::cout << DEFAULT << std::endl;
}
