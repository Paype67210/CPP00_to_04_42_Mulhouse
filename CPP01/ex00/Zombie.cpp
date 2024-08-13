/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:13:47 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/05 15:29:06 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string newName) : name(newName)
{
	std::cout << name << " was created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << name << " was destructed" << std::endl;
}

void Zombie::announce(void) const {
	std::cout << name << ": BraiiiiiinnnnzzzZ..." << std::endl;
}
