/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:43:54 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/21 14:53:52 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

int Character::_nb_Players = 0;
AMateria *Character::floor[20] = {NULL};

/* Destructors */
Character::~Character() {
    std::clog << GRAY400 << "Character destructor called" << RESET << std::endl;
    _nb_Players--;
    for (int i = 0; i < 4; i++) {
        if (this->_tod_bag[i]) {
            delete this->_tod_bag[i];
        }
    }
    if (_nb_Players == 0) {
        std::cout << RED200 << "All Players exited, items on the floor disappear..." \
            << RESET << std::endl;
        for (int i = 0; i < 20; i++) {
            if (floor[i]) {
                delete floor[i];
                floor[i] = NULL;
            }
        }
    }
}

/* Constructors */
Character::Character() {
    std::clog << GRAY400 << "Character default constructor called" << RESET << std::endl;
    this->_name = "Player with no name";
    for (int i = 0; i < 4; i++) {
        this->_tod_bag[i] = NULL;
    }
    _nb_Players++;
}

Character::Character(std::string name) {
    std::clog << GRAY400 << "Character name constructor called" << RESET << std::endl;
    this->_name = name;
    for (int i = 0; i < 4; i++) {
        this->_tod_bag[i] = NULL;
    }
    _nb_Players++;
}

Character::Character(const Character &other) {
    std::clog << GRAY400 << "Character copy constructor called" << RESET << std::endl;
    this->_name = other._name;
    for (int i = 0; i < 4; i++) {
        if (other._tod_bag[i]) {
            this->_tod_bag[i] = other._tod_bag[i]->clone();
            this->_tod_bag[i]->setMan(this);
        }
        else { this->_tod_bag[i] = NULL; }
    }
    _nb_Players++;
}

/* Oprators */
Character &Character::operator=(const Character &other) {
    std::clog << GRAY400 << "Character assignation operator called" << RESET << std::endl;
    if (this != &other) {
        this->_name = other._name;
        for (int i = 0; i < 4; i++) {
            if (this->_tod_bag[i]) { delete this->_tod_bag[i]; }
            if (other._tod_bag[i]) { this->_tod_bag[i] = other._tod_bag[i]->clone(); }
            else { this->_tod_bag[i] = NULL; }
        }
    }
    return *this;
}

/* Getters & Setters */
std::string const &Character::getName() const { return this->_name; }

void Character::setName(std::string name) { this->_name = name; }

AMateria *Character::getStock(int idx) const {
    if (idx < 0 || idx > 3) { return NULL; }
    return this->_tod_bag[idx];
}

void Character::setStock(AMateria *m, int idx) {
    if (idx < 0 || idx > 3) { return; }
    this->_tod_bag[idx] = m;
}

/* Member Functions */
void Character::equip(AMateria *materia) {
    std::clog << GRAY400 << "Character equip called" << RESET << std::endl;
    if (!materia) {
        std::cout << RED400 << "Materia does not exist!" << RESET << std::endl;
        return ;
    }
    if (materia->getMan()) {
        std::cout << ROSE800 << materia->getType() << " is still equiped to " \
            << materia->getMan()->getName() \
            << ". Cannot equip it to another!" << RESET << std::endl;
        return ;
    }
    if (materia->getMateriaSource()) {
        std::cout << ROSE800 << materia->getType() \
            << ": already equiped to a MateriaSoource. No transfert possible!" << RESET << std::endl;
        return ;
    }
    for (int i = 0; i < 4; i++) {
        if (!this->_tod_bag[i]) {
            this->_tod_bag[i] = materia;
            materia->setMan(this);
            std::cout << GREEN600 << this->getName() << " equiped " << materia->getType() \
                << ". idx: (" << i << ")" << RESET << std::endl; 
            return;
        }
    }
    for (int i = 0; i < 20; i++) {
        if (Character::floor[i] == NULL) {
            floor[i] = materia;
            floor[i]->setMan(NULL);
            std::cout << RED700 << this->_name << ": tod_bag full, " << materia->getType() \
                << " falls on the floor: located at [" << i << "]" << RESET << std::endl;
            return ;
        }
    }
    std::cout << ORANGE500 << this->_name \
        << ": tod_bag full, Materia falls onto the floor which is already full of other materias!" \
        << RESET << std::endl;
    delete materia;
}

void Character::equip_from_floor(int idx) {
  if (idx < 0 || idx > 19) {
    std::cout << RED700 << "Invalid floor index!" << RESET << std::endl;
    return;
  }
  if (this->floor[idx] == NULL) {
    std::cout << RED700 << "There is nothing at this spot on the floor to equip!"
              << RESET << std::endl;
    return;
  }
  for (int i = 0; i < 4; i++) {
    if (this->_tod_bag[i] == NULL) {
      this->_tod_bag[i] = this->floor[idx];
      this->_tod_bag[i]->setMan(this);
      this->floor[idx] = NULL;
      std::cout << this->getName() << " equipped "
                << this->_tod_bag[i]->getType() << ". (locate at " << i << ")"
                << std::endl;
      return;
    }
  }
  std::cout << this->_name << ": tod_bag full. Can't equip "
            << this->floor[idx]->getType() << std::endl;
}

void Character::unequip(int idx) {
    if (idx < 0 || idx > 3) {
    std::cout << RED700 << "Invalid tod_bag index!" << RESET << std::endl;
    return;
  }
  if (this->_tod_bag[idx] == NULL) {
    std::cout << "tod_bag position already empty!" << std::endl;
    return;
  }
  int i;
  for (i = 0; i < 20; i++) {
    if (Character::floor[i] == NULL) {
      floor[i] = this->_tod_bag[i];
      floor[i]->setMan(NULL);
      std::cout << "Materia is unequipped and falls on the ground! (location: "
                << i << ")" << std::endl;
      break;
    }
  }
  if (i == 20) {
    std::cout << "Too many materias on the floor. The Player cannot move their "
                 "arms to unequip the item!"
              << std::endl;
    return;
  }
  this->_tod_bag[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
    if (idx < 0 || idx > 3) {
    std::cout <<RED700 << "Invalid tod_bag index!" << RESET << std::endl;
    return;
  }
  if (this->_tod_bag[idx] == NULL) {
    std::cout << "Location " << idx << " is empty!" << std::endl;
    return;
  }
	std::cout << _name << ": ";
  this->_tod_bag[idx]->use(target);
  delete this->_tod_bag[idx];
  this->_tod_bag[idx] = NULL;
}
