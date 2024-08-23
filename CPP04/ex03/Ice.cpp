/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:55:28 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/21 15:14:48 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/* Constructors */
Ice::Ice() {
    std::clog << GRAY400 << "Ice default constructor called" << RESET << std::endl;
    this->_type = "ice";
    this->_Man = NULL;
    this->_materia_source = NULL;
}

Ice::Ice(const Ice &other) {
    std::clog << GRAY400 << "Ice copy constructor called" << RESET << std::endl;
    *this = other;
    this->_Man = NULL;
    this->_materia_source = NULL;
}

/* Destructors */
Ice::~Ice() {
    std::clog << GRAY400 << "Ice destructor called" << RESET << std::endl;
}

/* Oprators */
Ice &Ice::operator=(const Ice &other) {
    std::cout << ORANGE400 << "Assign an Ice to another does not make sens!" << RESET << std::endl;
    (void)other;
    return *this;
}

/* Member Functions */
void Ice::use(ICharacter &target) {
    std::cout << SKY600 << "* shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl;
};

AMateria *Ice::clone() const {
    AMateria *buffer = new Ice(*this);
    buffer->setMan(NULL);
    buffer->setMateriaSource(NULL);
    return buffer;
}
