/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:00:39 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/19 12:13:02 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Constructors */
Cat::Cat() : Animal() {
    std::cout << GRAY400 << "Cat default constructor called" << RESET << std::endl;
    setType("Cat");
}

Cat::Cat(const Cat &other) : Animal() {
    std::cout << GRAY400 << "Cat copy constructor called" << RESET << std::endl;
    *this = other;
}

/* Destructors */
Cat::~Cat() {
    std::cout << GRAY400 << "Cat destructor called" << RESET << std::endl;
}

/* Oprators */
Cat &Cat::operator=(const Cat &other) {
    std::cout << GRAY400 << "Cat assignation operator called" << RESET << std::endl;
    if (this != &other)
        setType(other.getType());
    return *this;
}

/* Member Functions */
void Cat::makeSound() const {
    std::cout << SKY600 << "Meow Meow" << RESET << std::endl;
};
