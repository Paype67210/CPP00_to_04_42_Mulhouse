/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:55:28 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/21 15:18:25 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/* Constructors */
AMateria::AMateria() {
    std::clog << GRAY400 << "AMateria default constructor called" << RESET << std::endl;
    this->_type = "";
    this->_Man = NULL;
    this->_materia_source = NULL;
}

AMateria::AMateria(std::string const &type) {
    std::clog << GRAY400 << "AMateria type constructor called" << RESET << std::endl;
    this->_type = type;
    this->_Man = NULL;
    this->_materia_source = NULL;
}

AMateria::AMateria(const AMateria &other) {
    std::clog << GRAY400 << "AMateria copy constructor called" << RESET << std::endl;
    *this = other;
    this->_Man = NULL;
    this->_materia_source = NULL;
}

/* Destructors */
AMateria::~AMateria() {
    std::clog << GRAY400 << "AMateria destructor called" << RESET << std::endl;
}

/* Oprators */
AMateria &AMateria::operator=(const AMateria &other) {
    std::clog << GRAY400 << "AMateria assignation operator called" << RESET << std::endl;
    if (this != &other)
        _type = other._type;
    return *this;
}

/* Getters & Setters */
std::string const &AMateria::getType() const { return _type; }

Character *AMateria::getMan() const { return this->_Man; }

void AMateria::setMan(Character *new_Man) { this->_Man = new_Man; }

MateriaSource *AMateria::getMateriaSource() const { return this->_materia_source ; }

void AMateria::setMateriaSource(MateriaSource *new_materia_source) { 
    this->_materia_source = new_materia_source;
}

/* Member Functions */
void AMateria::use(ICharacter &target) {
    std::cout << SKY600 << "* uses some materia on " << target.getName() << " *" \
        << RESET << std::endl;
}
