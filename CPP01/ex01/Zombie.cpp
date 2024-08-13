/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:13:47 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/05 15:58:46 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {

}

Zombie::~Zombie() {
	std::cout << name << " was destructed" << std::endl;
}

void Zombie::setName(std::string newName) {
	name = newName;
}

void Zombie::announce(void) const {
	std::cout << name << ": BraiiiiiinnnnzzzZ..." << std::endl;
}
