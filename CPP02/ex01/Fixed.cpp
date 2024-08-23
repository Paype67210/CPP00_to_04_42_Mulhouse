/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:46:55 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/14 10:37:32 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    std::cout << BLACK << "Default constructor called" << RESET << std::endl;
}

Fixed::Fixed(Fixed const &src) : _value (src._value)
{
    std::cout << BLACK << "Copy constructor called" << RESET << std::endl;
}

Fixed::~Fixed()
{
    std::cout << BLACK << "Destructor called" << RESET << std::endl;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
    std::cout << BLACK << "Assignation operator called" << RESET << std::endl;
    if (this != &rhs)
        this->_value = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << BLACK << "getRawBits member function called" << RESET << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

Fixed::Fixed(int const value)
{
    std::cout << BLACK << "Int constructor called" << RESET << std::endl;
    this->_value = value << this->_fractionalBits;
}

Fixed::Fixed(float const value)
{
    std::cout << BLACK << "Float constructor called" << RESET << std::endl;
    this->_value = roundf(value * (1 << this->_fractionalBits));
}

float Fixed::toFloat(void) const
{
    return (float)this->_value / (1 << this->_fractionalBits);
}

int Fixed::toInt(void) const
{
    return this->_value >> this->_fractionalBits;
}

std::ostream &operator<<(std::ostream &o, const Fixed &fixed)
{
    o << fixed.toFloat();
    return o;
}
