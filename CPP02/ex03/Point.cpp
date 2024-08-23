/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 15:13:21 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/14 10:28:29 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(Point const &src) : _x(src.getX()), _y(src.getY()) {}


Point::Point(float const x, float const y) : _x(x), _y(y) {}

Point::~Point() {}

Point	&Point::operator=(Point const &rhs)
{
    if (this != &rhs)
    {
        this->_x = rhs.getX();
        this->_y = rhs.getY();
    }
    return *this;
}

Fixed	Point::getX(void) const
{
    return this->_x.toInt();
}

Fixed	Point::getY(void) const
{
    return this->_y.toInt();
}

void	Point::setX(float const x)
{
    this->_x = Fixed(x);
}

void	Point::setY(float const y)
{
    this->_y = Fixed(y);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed f1 = Fixed((b.getX().toFloat() - a.getX().toFloat()) * (point.getY().toFloat() - a.getY().toFloat()) - \
        (b.getY().toFloat() - a.getY().toFloat()) * (point.getX().toFloat() - a.getX().toFloat()));
    Fixed f2 = Fixed((c.getX().toFloat() - b.getX().toFloat()) * (point.getY().toFloat() - b.getY().toFloat()) - \
        (c.getY().toFloat() - b.getY().toFloat()) * (point.getX().toFloat() - b.getX().toFloat()));
    Fixed f3 = Fixed((a.getX().toFloat() - c.getX().toFloat()) * (point.getY().toFloat() - c.getY().toFloat()) - \
        (a.getY().toFloat() - c.getY().toFloat()) * (point.getX().toFloat() - c.getX().toFloat()));
    
   
    if ((a.getX() == point.getX() && a.getY() == point.getX()) || \
        (b.getX() == point.getX() && b.getY() == point.getX()) || \
        (c.getX() == point.getX() && c.getY() == point.getX()))
        return false;
    
    if ((Fixed::min(a.getX(), b.getX()) <= point.getX()) && \
        (point.getX() <=Fixed::max(a.getX(), b.getX())) && \
        (Fixed::min(a.getY(), b.getY()) <= point.getY()) && \
        (point.getY() <=Fixed::max(a.getY(), b.getY())))
        return false;
    
    if ((f1.getRawBits() >= 0 && f2.getRawBits() >= 0 && f3.getRawBits() >= 0) || \
        (f1.getRawBits() <= 0 && f2.getRawBits() <= 0 && f3.getRawBits() <= 0))
        return true;
    return false;
}
