/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:22:48 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/18 18:02:34 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Constructors */
ClapTrap::ClapTrap() : _name("unknown..."), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = other;
}

/* Destructor */
ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called" << std::endl;
}

/* Operators */
ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    std::cout << "ClapTrap assignation operator called" << std::endl;
    if (this != &other) {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

/* Getters */
std::string ClapTrap::getName() const{ return (this->_name);}

int ClapTrap::getHitPoints() const { return (this->_hitPoints);}

int ClapTrap::getEnergyPoints() const { return (this->_energyPoints);}

int ClapTrap::getAttackDamage() const { return (this->_attackDamage);}

/* Setters */
void ClapTrap::setName(std::string name) { this->_name = name;}

void ClapTrap::setHitPoints(int hitPoints) { this->_hitPoints = hitPoints;}

void ClapTrap::setEnergyPoints(int energyPoints) { this->_energyPoints = energyPoints;}

void ClapTrap::setAttackDamage(int attackDamage) { this->_attackDamage = attackDamage;}

/* Member functions */
void ClapTrap::attack(const std::string &target) {
    if (this->_energyPoints == 0) {
        std::cout << this->_name << ": Not enough energy!" << std::endl;
		return ;
	}
    if (this->_hitPoints > 0) {
		this->_energyPoints--;
		std::cout << this->_name << " attacks " << target << ", causing " \
			<< this->_attackDamage << " points of damage" << std::endl;
	}
	else
        std::cout << this->_name << ": I am dead!" << std::endl;
}

void ClapTrap::attack(ClapTrap &target) {
	if (this->_energyPoints == 0) {
		std::cout << this->_name << ": Not enough energy!" << std::endl;
		return ;
	}
	if (this->_hitPoints > 0) {
		this->_energyPoints--;
		std::cout << this->_name << " attacks " << target.getName() << ", causing " \
			<< this->_attackDamage << " points of damage" << std::endl;
		target.takeDamage(this->_attackDamage);
	}
	else
		std::cout << this->_name << ": I am dead!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hitPoints == 0) {
		std::cout << this->_name <<  ": I am dead!" << std::endl;
		return ;
	}
	if (amount == 0) {
		std::cout << this->_name << ": Yeah what a f... attack :))" << std::endl;
		return ;
	}
	if (this->_hitPoints <= amount){
		std::cout << this->_name << " received " << amount << " damage and died" << std::endl;
		this->_hitPoints = 0;
		return ;
	}
	else {
		std::cout <<  this->_name << " received " << amount << " damage" << std::endl;
		this->_hitPoints -= amount;
	}
	std::cout <<  this->_name << " has now " << this->_hitPoints << " hitpoints!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints == 0) {
        std::cout << this->_name <<  ": I am dead!" << std::endl;
		return ;
	}
	if (amount == 0) {
		std::cout << "Repair amount must be at least 1" << std::endl;
		return ;
	}
	if (this->_energyPoints == 0) {
		std::cout << this->_name << ": No more energy..." << std::endl;
		return ;
	}
	if (this->_hitPoints + amount > 10) {
        this->_hitPoints = 10;
    	std::cout << "ClapTrap cannot have more than 10 hit points" << std::endl;
    }
	else {
		this->_hitPoints += amount;
		std::cout << this->_name << " increased hit points by " << amount << std::endl;
	}
	this->_energyPoints -= 1;	
}

void ClapTrap::status(void) const {
	std::cout << "Name: " << this->_name << " HP: " << this->_hitPoints << " EP: " \
  		<< this->_energyPoints << " ATT: " << this->_attackDamage << std::endl;
}
