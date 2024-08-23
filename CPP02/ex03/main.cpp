/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 16:44:15 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/14 09:42:55 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main( void )
{
	std::cout << ORANGE << "Création de 3 points a(0, 0), b(4, 0) & c(0, 4):" << RESET << std::endl;
	Point a(0, 0);
	Point b(4, 0);
	Point c(0, 4);
	
	std::cout << "a(" << a.getX().toInt() << ", " << a.getY().toInt() << ")" << std::endl;
	std::cout << "b(" << b.getX().toInt() << ", " << b.getY().toInt() << ")" << std::endl;
	std::cout << "c(" << c.getX().toInt() << ", " << c.getY().toInt() << ")" << std::endl << std::endl;
	std::cout << GREEN << "Test 1: Création d'un point p0(2, 2) situé à l'intérieur :" << RESET << std::endl;
	Point p0(2, 2);
	std::cout << "p0(" << p0.getX().toInt() << ", " << p0.getY().toInt() << ")" << std::endl;
	std::cout << "p0 est-il à l'intérieur de ABC ? " << (bsp(a, b, c, p0) ? "true" : "false") << RESET << std::endl << std::endl;

	std::cout << GREEN << "Test 2 : Création d'un point p1(16, 38) situé à l'extérieur :" << RESET << std::endl;
	Point p1(16, 38);
	std::cout << "p1(" << p1.getX().toInt() << ", " << p1.getY().toInt() << ")" << std::endl;
	std::cout << "p1 est-il à l'intérieur de ABC ? " << (bsp(a, b, c, p1) ? "true" : "false") << std::endl << std::endl;
	
	std::cout << GREEN << "Test 3: Création d'un point p2(2, 0) situé sur la limite :" << RESET << std::endl;
	Point p2(2, 0);
	std::cout << "p2(" << p2.getX().toInt() << ", " << p2.getY().toInt() << ")" << std::endl;
	std::cout << "p2 est-il à l'intérieur de ABC ? " << (bsp(a, b, c, p2) ? "true" : "false") << std::endl << std::endl;
	
	std::cout << GREEN << "Test 4: Création d'un point p3(0, 4) qui est un sommet :" << RESET << std::endl;
	Point p3(0, 4);
	std::cout << "p3(" << p3.getX().toInt() << ", " << p3.getY().toInt() << ")" << std::endl;
	std::cout << "p3 est-il à l'intérieur de ABC ? " << (bsp(a, b, c, p3) ? "true" : "false") << std::endl << std::endl;
	
return 0;
}
