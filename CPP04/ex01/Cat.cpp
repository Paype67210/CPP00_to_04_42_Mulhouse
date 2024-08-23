/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:00:39 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/19 15:14:02 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Constructors */
Cat::Cat() : Animal() {
    std::cout << GRAY400 << "Cat default constructor called" << RESET << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal() {
    std::cout << GRAY400 << "Cat copy constructor called" << RESET << std::endl;
    this->_type = other.getType();
    this->_brain = new Brain(*other._brain);
}

/* Destructors */
Cat::~Cat() {
    std::cout << GRAY400 << "Cat destructor called" << RESET << std::endl;
    delete this->_brain;
}

/* Oprators */
Cat &Cat::operator=(const Cat &other) {
    std::cout << GRAY400 << "Cat assignation operator called" << RESET << std::endl;
    if (this != &other) {
        this->_type = other.getType();
        delete this->_brain;
        this->_brain = new Brain(*other._brain);
    }
    return *this;
}

/* Member Functions */
void Cat::makeSound() const {
    std::cout << SKY600 << "Meow Meow" << RESET << std::endl;
};

void Cat::put_idea(std::string newIdea) {
    for (int i = 0; i < 100; i++) {
        if (this->_brain->getIdea(i) == "") {
            this->_brain->setIdea(i, newIdea);
            return ;
        }
    }
    std::cout << RED600 << "Brain of cat is full" << RESET << std::endl;
}

void Cat::print_ideas() const {
    std::string buffer;
    std::cout << "Cat's ideas:" << std::endl;
    for (int i = 0; i < 100; i++) {
        buffer = this->_brain->getIdea(i);
        if (buffer.empty())
            return;
        std::cout << buffer << std::endl;
    }
}
