/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:44:15 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/14 10:35:04 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed b( a );
Fixed c;

c = b;
std::cout << "a est construit par defaut a=0" << std::endl;
std::cout << a.getRawBits() << std::endl;
std::cout << "b est construit par copie de a" << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << "on affecte la valeur c = b via la surcharge d'affectation" << std::endl;
std::cout << c.getRawBits() << std::endl;
return 0;
}
