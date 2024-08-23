/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 15:15:16 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/18 18:32:52 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main() {
    ScavTrap Myra = ScavTrap("Myra");
	ScavTrap Arthur = ScavTrap("Arthur");

	Myra.status();
	Arthur.status();
	
	std::cout << GREEN << std::endl << "--- Fight ---" << std::endl << std::endl;
	
	Arthur.guardGate();
	Myra.attack(Arthur);
	Arthur.attack(Myra);
	Myra.attack(Arthur);
	Arthur.beRepaired(10);
	Myra.attack(Arthur);
	Myra.attack(Arthur);
	Myra.attack(Arthur);
	Myra.attack(Arthur);
	Myra.attack(Arthur);
	Arthur.beRepaired(1000);
	Myra.status();
	Arthur.status();
	
	std::cout << RED << std::endl << "--- Copying a dead ScavTrap ---" << std::endl << std::endl;
	ScavTrap William = Arthur;
	William.status();
	William.beRepaired(50);
	William.setName("William");
	William.status();
	William.beRepaired(50);
	
	std::cout << BLUE <<std::endl << "--- ClapTrap vs Scavtrap ---" << std::endl << std::endl;
	ClapTrap Alex = ClapTrap("Alex");
	Alex.status();
	Alex.attack(Myra);
	Alex.setAttackDamage(100);
	Alex.attack(Myra);
	
	std::cout << DEFAULT << std::endl;
}