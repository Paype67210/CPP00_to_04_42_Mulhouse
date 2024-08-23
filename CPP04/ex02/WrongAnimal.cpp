/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:07:39 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/19 12:06:06 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* Constructors */
WrongAnimal::WrongAnimal() {
    std::cout << GRAY400 << "WrongAnimal default constructor called" << RESET << std::endl;
    _type = "Strange WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string type) {
    std::cout << GRAY400 << "WrongAnimal type constructor called" << RESET << std::endl;
    _type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
    std::cout << GRAY400 << "WrongAnimal copy constructor called" << RESET << std::endl;
    *this = other;
}

/* Destructors */
WrongAnimal::~WrongAnimal() {
    std::cout << GRAY400 << "WrongAnimal destructor called" << RESET << std::endl;
}

/* Oprators */
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    std::cout << GRAY400 << "WrongAnimal assignation operator called" << RESET << std::endl;
    if (this != &other)
        _type = other._type;
    return *this;
}

/* Getters */
std::string WrongAnimal::getType() const { return _type; }

/* Setters */

void WrongAnimal::setType(std::string type) { _type = type; }

/* Member Functions */
void WrongAnimal::makeSound() const {
    std::cout << SKY600 << "WrongAnimal sound" << RESET << std::endl;
};
