/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 15:15:16 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/18 19:00:28 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main() {
    ClapTrap Myra("Myra");
	ClapTrap unknown;
	ScavTrap Arthur("Arthur");
	FragTrap William("William");

	unknown.takeDamage(5);
	Myra.takeDamage(9);
	Myra.attack(unknown.getName());
	Arthur.attack(Myra.getName());
	William.attack(Myra.getName());
	William.highFivesGuys();
}
