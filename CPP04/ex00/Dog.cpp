/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:00:39 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/19 12:15:27 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Constructors */
Dog::Dog() : Animal() {
    std::cout << GRAY400 << "Dog default constructor called" << RESET << std::endl;
    setType("Dog");
}

Dog::Dog(const Dog &other) : Animal() {
    std::cout << GRAY400 << "Dog copy constructor called" << RESET << std::endl;
    *this = other;
}

/* Destructors */
Dog::~Dog() {
    std::cout << GRAY400 << "Dog destructor called" << RESET << std::endl;
}

/* Oprators */
Dog &Dog::operator=(const Dog &other) {
    std::cout << GRAY400 << "Dog assignation operator called" << RESET << std::endl;
    if (this != &other)
        setType(other.getType());
    return *this;
}

/* Member Functions */
void Dog::makeSound() const {
    std::cout << SKY600 << "Wouaf Wouaf" << RESET << std::endl;
};
