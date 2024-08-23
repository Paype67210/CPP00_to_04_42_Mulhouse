/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:31:45 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/09 15:25:51 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

#define RED "\033[1;31m"
#define ORANGE "\033[1;33m"
#define GREEN "\033[1;32m"
#define BLUE "\033[1;34m"
#define RESET "\033[0m"

class Fixed
{
    public:
        Fixed();
        Fixed(Fixed const &src);
        Fixed(int const value);
        Fixed(float const value);
        ~Fixed();
        Fixed	&operator=(Fixed const &rhs);

        bool	operator==(Fixed const &rhs) const;
		bool	operator!=(Fixed const &rhs) const;
        bool	operator>(Fixed const &rhs) const;
        bool	operator<(Fixed const &rhs) const;
        bool	operator>=(Fixed const &rhs) const;
        bool	operator<=(Fixed const &rhs) const;

        Fixed	operator+(Fixed const &rhs) const;
        Fixed	operator-(Fixed const &rhs) const;
        Fixed	operator*(Fixed const &rhs) const;
        Fixed	operator/(Fixed const &rhs) const;

		Fixed	&operator++(void);
        Fixed	operator++(int);
        Fixed	&operator--(void);
        Fixed	operator--(int);

        int		getRawBits(void) const;
        void	setRawBits(int const raw);
        float	toFloat(void) const;
        int		toInt(void) const;

		static Fixed		&min(Fixed &a, Fixed &b);
        static Fixed		&max(Fixed &a, Fixed &b);
        static Fixed const	&min(Fixed const &a, Fixed const &b);
        static Fixed const	&max(Fixed const &a, Fixed const &b);
        
    private:
        int					_value;
        static const int	_fractionalBits = 8;
};

std::ostream	&operator<<(std::ostream &flux, const Fixed &fixed);

#endif