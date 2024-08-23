/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:00:39 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/19 12:13:02 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/* Constructors */
WrongCat::WrongCat() : WrongAnimal() {
    std::cout << GRAY400 << "WrongCat default constructor called" << RESET << std::endl;
    setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal() {
    std::cout << GRAY400 << "WrongCat copy constructor called" << RESET << std::endl;
    *this = other;
}

/* Destructors */
WrongCat::~WrongCat() {
    std::cout << GRAY400 << "WrongCat destructor called" << RESET << std::endl;
}

/* Oprators */
WrongCat &WrongCat::operator=(const WrongCat &other) {
    std::cout << GRAY400 << "WrongCat assignation operator called" << RESET << std::endl;
    if (this != &other)
        setType(other.getType());
    return *this;
}

/* Member Functions */
void WrongCat::makeSound() const {
    std::cout << SKY600 << "Meow Wouaf Grrrrr" << RESET << std::endl;
};
