/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:07:39 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/19 12:06:06 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/* Constructors */
AAnimal::AAnimal() {
    std::cout << GRAY400 << "AAnimal default constructor called" << RESET << std::endl;
    _type = "Strange AAnimal";
}

AAnimal::AAnimal(std::string type) {
    std::cout << GRAY400 << "AAnimal type constructor called" << RESET << std::endl;
    _type = type;
}

AAnimal::AAnimal(const AAnimal &other) {
    std::cout << GRAY400 << "AAnimal copy constructor called" << RESET << std::endl;
    *this = other;
}

/* Destructors */
AAnimal::~AAnimal() {
    std::cout << GRAY400 << "AAnimal destructor called" << RESET << std::endl;
}

/* Oprators */
AAnimal &AAnimal::operator=(const AAnimal &other) {
    std::cout << GRAY400 << "AAnimal assignation operator called" << RESET << std::endl;
    if (this != &other)
        _type = other._type;
    return *this;
}

/* Getters */
std::string AAnimal::getType() const { return _type; }

/* Setters */

void AAnimal::setType(std::string type) { _type = type; }

/* Member Functions */
void AAnimal::makeSound() const {
    std::cout << SKY600 << "AAnimal sound" << RESET << std::endl;
};
