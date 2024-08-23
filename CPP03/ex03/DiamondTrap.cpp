/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:09:30 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/19 10:48:21 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* Constructors */
DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap() {
    std::cout << "Default constructor called (DiamondTrap)" << std::endl;
    ClapTrap::_name = "Unknown_clap_name";
    this->_name = "Unknown DiamondTrap";
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(), FragTrap() {
 
	std::cout << "Name constructor called (DiamondTrap)" << std::endl;
    ClapTrap::_name = name +"_clap_name";
    this->_name = name;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}

/* Destructor */
DiamondTrap::~DiamondTrap(){
	std::cout << "Destructor called (DiamondTrap)" << std::endl;
}

/* Operators */
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
    std::cout << "DiamondTrap assignation operator called" << std::endl;
    if (this != &other) {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

/* Member functions */
void DiamondTrap::whoAmI(){
	std::cout << "My name is " << this->_name << ", ClapTrap's name is " << ClapTrap::_name << std::endl;
}
