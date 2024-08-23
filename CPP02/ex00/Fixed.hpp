/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:31:45 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/14 10:08:04 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

#define RED "\033[1;31m"
#define ORANGE "\033[1;33m"
#define GREEN "\033[1;32m"
#define BLUE "\033[1;34m"
#define RESET "\033[0m"
#define BLACK "\033[0;30m"

class Fixed
{
    public:
        Fixed();
        Fixed(Fixed const &src);
        ~Fixed();
        Fixed &operator=(Fixed const &rhs);
        int getRawBits(void) const;
        void setRawBits(int const raw);
    private:
        int _value;
        static const int _fractionalBits = 8;
};

#endif