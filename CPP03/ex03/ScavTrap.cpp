/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 15:49:15 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/19 10:48:47 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* Constructors*/
ScavTrap::ScavTrap() {
    std::cout << "ScavTrap default constructor called" << std::endl;
    _name = "Unknown ScavTrap";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) {
    std::cout << "ScavTrap name constructor called" << std::endl;
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

/* Destructor */
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

/* Operators */
ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
    std::cout << "ScavTrap assignation operator called" << std::endl;
    if (this != &other) {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

/* Member functions */
void ScavTrap::attack(const std::string &target) {
        if (this->_energyPoints == 0) {
        std::cout << this->_name << ": Not enough energy!" << std::endl;
		return ;
	}
    if (this->_hitPoints > 0) {
		this->_energyPoints--;
		std::cout << this->_name << " attacks " << target << ", causing " \
			<< this->_attackDamage << " points of damage (ScavTrap)" << std::endl;
	}
	else
        std::cout << this->_name << ": I am dead!" << std::endl;
}

void ScavTrap::attack(ClapTrap &target) {
    if (this->_energyPoints == 0) {
		std::cout << this->_name << ": Not enough energy!" << std::endl;
		return ;
	}
	if (this->_hitPoints > 0) {
		this->_energyPoints--;
		std::cout << this->_name << " attacks " << target.getName() << ", causing " \
			<< this->_attackDamage << " points of damage (ScavTrap)" << std::endl;
		target.takeDamage(this->_attackDamage);
	}
	else
		std::cout << this->_name << ": I am dead!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
    if (this->_hitPoints == 0)
        std::cout << this->_name <<  ": I am dead!" << std::endl;
	else if (amount == 0) {
        this->_energyPoints -= 1;
		std::cout << "Repair amount must be at least 1" << std::endl;
    }
	else if (this->_energyPoints == 0)
		std::cout << this->_name << ": No more energy..." << std::endl;
	else if (this->_hitPoints + amount > 100) {
        this->_hitPoints = 100;
        this->_energyPoints -= 1;
		std::cout << "ScaveTrap cannot have more than 50 hit points" << std::endl;
    }
	else {
		this->_energyPoints -= 1;
		this->_hitPoints += amount;
		std::cout << this->_name << " increased hit points by " << amount << std::endl;
	}
}

void ScavTrap::guardGate() {
   if (this->_energyPoints > 0) {
		this->_energyPoints--;
        std::cout << this->_name << " (ScavTrap) has entered in Gate keeper mode" << std::endl;
    }
    else {
    std::cout << this->_name << " (ScavTrap) doesn't have enough energy to guard the gate!" << std::endl;
  }
}