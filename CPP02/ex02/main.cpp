/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:44:15 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/09 14:55:51 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main( void )
{
	std::cout << ORANGE << "Test 1: Création de a avec le constructeur standard:" << RESET << std::endl;
	Fixed		a;
	std::cout << "a = " << a << std::endl << std::endl;

	std::cout << ORANGE << "Test 2: Création de b = 5.05f x 2:" << RESET << std::endl;
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "b = " << b << std::endl << std::endl;

	std::cout << ORANGE << "Test 3: Affichage de a en préincrémentation:" << RESET << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl << std::endl;
	
	std::cout << ORANGE << "Test 3bis: Affichage de b en prédécrémentation:" << RESET << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "--b = " << --b << std::endl << std::endl;
	
	std::cout << ORANGE << "Test 4: Affichage de a en postincrémentation:" << RESET << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl << std::endl;
	
	std::cout << ORANGE << "Test 4bis: Affichage de b en postdécrémentation:" << RESET << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "b++ = " << b++ << std::endl;
	std::cout << "b = " << b << std::endl << std::endl;
	
	std::cout << ORANGE << "Test 5: Affichage du max entre a & b:" << RESET << std::endl;
	std::cout << "max(a[" << a << "], b[" << b << "]) = ";
	std::cout << Fixed::max( a, b ) << std::endl << std::endl;

	std::cout << ORANGE << "Test 6: Affichage du min entre a & b:" << RESET << std::endl;
	std::cout << "min(a[" << a << "], b[" << b << "]) = ";
	std::cout << Fixed::min( a, b ) << std::endl << std::endl;
	
return 0;
}
