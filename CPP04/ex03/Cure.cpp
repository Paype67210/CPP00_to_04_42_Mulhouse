/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:55:28 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/19 17:37:51 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/* Constructors */
Cure::Cure() {
    std::clog << GRAY400 << "Cure default constructor called" << RESET << std::endl;
    this->_type = "cure";
    this->_Man = NULL;
    this->_materia_source = NULL;
}

Cure::Cure(const Cure &other) {
    std::clog << GRAY400 << "Cure copy constructor called" << RESET << std::endl;
    *this = other;
    this->_Man = NULL;
    this->_materia_source = NULL;
}

/* Destructors */
Cure::~Cure() {
    std::clog << GRAY400 << "Cure destructor called" << RESET << std::endl;
}

/* Oprators */
Cure &Cure::operator=(const Cure &other) {
    std::clog << GRAY400 << "Copy a Cure to another has no sens!!" << RESET << std::endl;
    (void)other;
    return *this;
}

/* Member Functions */
void Cure::use(ICharacter &target) {
    std::cout << GREEN400 << "* heals " << target.getName() << "'s wounds *" << RESET << std::endl;
};

AMateria *Cure::clone() const {
    AMateria *buffer = new Cure(*this);
    buffer->setMan(NULL);
    buffer->setMateriaSource(NULL);
    return buffer;
}
