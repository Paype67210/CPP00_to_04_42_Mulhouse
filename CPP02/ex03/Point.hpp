/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 17:57:29 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/14 09:08:04 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(Point const &src);
		Point(float const x, float const y);
		~Point();
		Point	&operator=(Point const &rhs);

		Fixed	getX(void) const;
		Fixed	getY(void) const;
		void	setX(float const x);
		void	setY(float const y);

	private:
		Fixed	_x;
		Fixed	_y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
