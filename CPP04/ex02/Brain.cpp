/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:53:20 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/19 15:04:22 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* Constructors */
Brain::Brain() { std::cout << GRAY400 << "Brain default constructor called" << RESET << std::endl; }

Brain::Brain(const Brain &other) {
    std::cout << GRAY400 << "Brain copy constructor called" << RESET << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = other._ideas[i];
}

/* Destructors */
Brain::~Brain() { std::cout << GRAY400 << "Brain destructor called" << RESET << std::endl; }

/* Oprators */
Brain &Brain::operator=(const Brain &other) {
    std::cout << GRAY400 << "Brain assignation operator called" << RESET << std::endl;
    if (this != &other) {
        for (int i = 0; i < 100; i++)
            _ideas[i] = other._ideas[i];
    }
    return *this;
}

/* Getters */
std::string Brain::getIdea(const unsigned int index) const {
    if (index > 99) {
        std::cout << RED400 << "No idea at this index" << RESET << std::endl;
        return ("Error");
    }
    return (_ideas[index]);
}

/* Setters */
void Brain::setIdea(unsigned int index, std::string idea) {
    if (index > 99) {
        std::cout << RED400 << "Can't set idea " << index << ". Out of range!" << RESET << std::endl;
        return ;
    }
    this->_ideas[index] = idea;
}
