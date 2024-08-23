/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 15:49:15 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/18 19:01:20 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* Constructors*/
FragTrap::FragTrap() : ClapTrap() {
    std::cout << "FragTrap default constructor called" << std::endl;
    _name = "Unknown FragTrap";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "FragTrap name constructor called" << std::endl;
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

/* Destructor */
FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}
/* Member functions */
void FragTrap::attack(const std::string &target) {
        if (this->_energyPoints == 0) {
        std::cout << this->_name << ": Not enough energy!" << std::endl;
		return ;
	}
    if (this->_hitPoints > 0) {
		this->_energyPoints--;
		std::cout << this->_name << " attacks " << target << ", causing " \
			<< this->_attackDamage << " points of damage (FragTrap)" << std::endl;
	}
	else
        std::cout << this->_name << ": I am dead!" << std::endl;
}

void FragTrap::attack(ClapTrap &target) {
    if (this->_energyPoints == 0) {
		std::cout << this->_name << ": Not enough energy!" << std::endl;
		return ;
	}
	if (this->_hitPoints > 0) {
		this->_energyPoints--;
		std::cout << this->_name << " attacks " << target.getName() << ", causing " \
			<< this->_attackDamage << " points of damage (FragTrap)" << std::endl;
		target.takeDamage(this->_attackDamage);
	}
	else
		std::cout << this->_name << ": I am dead!" << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << "High Five!!!!" << std::endl;
}