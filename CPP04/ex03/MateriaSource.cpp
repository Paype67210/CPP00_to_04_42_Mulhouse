/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:49:32 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/21 15:25:48 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/* Destructors */
MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (this->_stock[i]) delete this->_stock[i];
	}
}
		
/* Constructors */
MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) { this->_stock[i] = NULL; }
}

MateriaSource::MateriaSource(const MateriaSource &other) {
	for (int i = 0; i < 4; i++) {
		if (other._stock[i]) {
			this->_stock[i] = other._stock[i]->clone();
			this->_stock[i]->setMateriaSource(this);
		}
		else
			this->_stock[i] = NULL;
	}
}
	
/* Operators */
MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
	std::clog << GRAY400 << "MateriaSource assignation operator called" << RESET << std::endl;
    if (this != &other) {
		for (int i = 0; i < 4; i++) {
        _stock[i] = other._stock[i]->clone();
		}
	}
    return *this;
}
	
/* Getters & Setters */
AMateria *MateriaSource::getStock(int idx) const {
	if (idx < 0 || idx > 3)
		return NULL;
	return this->_stock[idx];
}

void MateriaSource::setStock(int idx, AMateria *materia) {
	if (idx < 0 || idx > 3)
		return ;
	this->_stock[idx] = materia;
}
	
/* Member functions */
void MateriaSource::learnMateria(AMateria *materia) {
	for (int i = 0; i < 4; i++) {
		if (this->_stock[i] == NULL) {
			this->_stock[i] = materia;
			materia->setMateriaSource(this);
			std::cout << GREEN400 << "New Materia Learned: " << materia->getType() \
				<< "!" << RESET << std::endl;
			return ;
		}
	}
	delete materia;
	std::cout << RED600 << "Impossible learn: Stock Overflow!" << RESET << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	for (int i = 3; i >=0; i--) {
		if (this->_stock[i] && this->_stock[i]->getType() == type) {
			std::cout << GREEN400 << "MateriaSource creates: " << type << RESET << std::endl;
			return this->_stock[i]->clone();
		}
	}
	std::cout << RED600 << "MateriaSource cannot learn '" << type << "'!" << RESET << std::endl;
	return NULL;
}
