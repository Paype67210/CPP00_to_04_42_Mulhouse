/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:07:39 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/19 12:06:06 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* Constructors */
Animal::Animal() {
    std::cout << GRAY400 << "Animal default constructor called" << RESET << std::endl;
    _type = "Strange Animal";
}

Animal::Animal(std::string type) {
    std::cout << GRAY400 << "Animal type constructor called" << RESET << std::endl;
    _type = type;
}

Animal::Animal(const Animal &other) {
    std::cout << GRAY400 << "Animal copy constructor called" << RESET << std::endl;
    *this = other;
}

/* Destructors */
Animal::~Animal() {
    std::cout << GRAY400 << "Animal destructor called" << RESET << std::endl;
}

/* Oprators */
Animal &Animal::operator=(const Animal &other) {
    std::cout << GRAY400 << "Animal assignation operator called" << RESET << std::endl;
    if (this != &other)
        _type = other._type;
    return *this;
}

/* Getters */
std::string Animal::getType() const { return _type; }

/* Setters */

void Animal::setType(std::string type) { _type = type; }

/* Member Functions */
void Animal::makeSound() const {
    std::cout << SKY600 << "Animal sound" << RESET << std::endl;
};
