/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:46:55 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/09 15:39:41 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Constructeurs */
Fixed::Fixed() : _value(0)
{
    // std::clog << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src) : _value (src._value)
{
    // std::clog << "Copy constructor called" << std::endl;
}

/* Desctructeur */
Fixed::~Fixed()
{
    // std::clog << "Destructor called" << std::endl;
}
/* Surcharge de l'opérateur = */
Fixed &Fixed::operator=(Fixed const &rhs)
{
    // std::clog << "Assignation operator called" << std::endl;
    if (this != &rhs)
        this->_value = rhs.getRawBits();
    return *this;
}

/* Saisie des entrées en variable fixe */
Fixed::Fixed(int const value)
{
    // std::clog << "Int constructor called" << std::endl;
    this->_value = value << this->_fractionalBits;
}

Fixed::Fixed(float const value)
{
    // std::clog << "Float constructor called" << std::endl;
    this->_value = roundf(value * (1 << this->_fractionalBits));
}

/* Trasnformation des sorties en INT ou FLOAT */
int Fixed::toInt(void) const
{
    return this->_value >> this->_fractionalBits;
}

float Fixed::toFloat(void) const
{
    return (float)this->_value / (1 << this->_fractionalBits);
}

/* Récupération de la valeur brute */
int Fixed::getRawBits(void) const
{
    // std::clog << "getRawBits member function called" << std::endl;
    return this->_value;
}

/* Modification de la valeur brute */
void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

/* Surchjarge d'opérateurs de comparaison des valeurs */
bool Fixed::operator==(Fixed const &rhs) const
{
    return this->_value == rhs.getRawBits();
}

bool Fixed::operator!=(Fixed const &rhs) const
{
    return this->_value != rhs.getRawBits();
}

bool Fixed::operator>(Fixed const &rhs) const
{
    return this->_value > rhs.getRawBits();
}

bool Fixed::operator<(Fixed const &rhs) const
{
    return this->_value < rhs.getRawBits();
}

bool Fixed::operator>=(Fixed const &rhs) const
{
    return this->_value >= rhs.getRawBits();
}

bool Fixed::operator<=(Fixed const &rhs) const
{
    return this->_value <= rhs.getRawBits();
}

/* Surcharge d'opérateurs arithmétiques */
Fixed Fixed::operator+(Fixed const &rhs) const
{
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
    return Fixed(this->toFloat() / rhs.toFloat());
}

/* Surcharge d'opérateurs d'incrémentation et de décrémentation (pré & post) */
Fixed &Fixed::operator++(void)
{
    this->_value += 1;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->_value += 1;
    return tmp;
}

Fixed &Fixed::operator--(void)
{
    this->_value -= 1;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->_value -= 1;
    return tmp;
}

/* Surcharge d'opérateurs de comparaison des valeurs */
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return a > b ? a : b;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
    return a < b ? a : b;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
    return a > b ? a : b;
}

/* Surcharge de l'opérateur << */
std::ostream &operator<<(std::ostream &flux, const Fixed &fixed)
{
    flux << fixed.toFloat();
    return flux;
}
