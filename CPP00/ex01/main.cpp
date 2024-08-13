/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:03:49 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/05 10:25:51 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"PhoneBook.hpp"
#include	"Contact.hpp"
#include	<string>
#include	<iostream>
#include	<cstdlib>

#define		RED		"\033[1;31m"
#define		WHITE	"\033[1;37m"
#define		BLUE	"\033[1;34m"
#define		RESET	"\033[0m"

void	add(PhoneBook *Repertoire) {
	std::string	line[5];
	Contact		contact;

	std::cout	<< "First Name: ";
	std::getline(std::cin, line[0], '\n');
	std::cout	<< "Last Name: ";
	std::getline(std::cin, line[1], '\n');
	std::cout	<< "Nick Name: ";
	std::getline(std::cin, line[2], '\n');
	std::cout	<< "Phone Number: ";
	std::getline(std::cin, line[3], '\n');
	std::cout	<< "Darkest Secret: ";
	std::getline(std::cin, line[4], '\n');
	contact.add(line[0], line[1], line[2], line[3], line[4]);
	Repertoire->add(contact);
}

void	search(PhoneBook Repertoire) {
	std::string	line;
	int			index;

	if (Repertoire.PrintTable() == 1)
		return ;
	while (1) {
		std::cout << "Enter an index to see the contact (Q to exit): ";
		std::getline(std::cin, line, '\n');
		if (std::cin.eof())
			break;
		index = atoi(line.c_str());
		if (line == "Q")
			return ;
		if (!(index > 0 && index < 9)) {
			std::cout << "Index " << line << " does not exist!" <<std::endl;
			continue ;
		}
		Repertoire.search(index);
	}
}

int	main() {
	PhoneBook	Repertoire;
	std::string	line;

	std::cout << WHITE << "PhoneBook old school" << std::endl << RESET;
	std::cout << WHITE << "Commands: ADD, SEARCH, EXIT" << std::endl << RESET;
	while (1) {
		std::cout << BLUE << "PhoneBook: " << RESET;
		std::getline(std::cin, line, '\n');
		if (std::cin.eof())
			break ;
		if (line == "ADD")
			add(&Repertoire);
		else if (line == "SEARCH")
			search(Repertoire);
		else if (line == "EXIT")
			break ;
		else
			std::cout << RED << "Unknown command (" << line << ")" << std::endl << RESET;
	}
	std::cout << std::endl << "PhoneBook is now closed" << std::endl;
}
