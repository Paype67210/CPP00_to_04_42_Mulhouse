/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:00:39 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/19 16:01:31 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Constructors */
Dog::Dog() : AAnimal() {
    std::cout << GRAY400 << "Dog default constructor called" << RESET << std::endl;
    this->_type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog(const Dog &other) : AAnimal() {
    std::cout << GRAY400 << "Dog copy constructor called" << RESET << std::endl;
    this->_type = other.getType();
    this->_brain = new Brain(*other._brain);
}

/* Destructors */
Dog::~Dog() {
    std::cout << GRAY400 << "Dog destructor called" << RESET << std::endl;
    delete this->_brain;
}

/* Oprators */
Dog &Dog::operator=(const Dog &other) {
    std::cout << GRAY400 << "Dog assignation operator called" << RESET << std::endl;
    if (this != &other) {
        this->_type = other.getType();
        delete this->_brain;
        this->_brain = new Brain(*other._brain);
    }
    return *this;
}

/* Member Functions */
void Dog::makeSound() const {
    std::cout << SKY600 << "Wouaf Wouaf" << RESET << std::endl;
};

void Dog::put_idea(std::string newIdea) {
    for (int i = 0; i < 100; i++) {
        if (this->_brain->getIdea(i) == "") {
            this->_brain->setIdea(i, newIdea);
            return ;
        }
    }
    std::cout << RED600 << "Brain of dog is full" << RESET << std::endl;
}

void Dog::print_ideas() const {
    std::string buffer;
    std::cout << "Dog's ideas:" << std::endl;
    for (int i = 0; i < 100; i++) {
        buffer = this->_brain->getIdea(i);
        if (buffer.empty())
            return;
        std::cout << buffer << std::endl;
    }
}
