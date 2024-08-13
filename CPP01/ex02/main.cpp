/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 08:57:36 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/06 09:17:28 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#define		RED		"\033[1;31m"
#define		WHITE	"\033[1;37m"
#define		YELLOW	"\033[1;33m"
#define		BLUE	"\033[1;34m"
#define		GREEN	"\033[1;32m"
#define		RESET	"\033[0m"

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string *testPTR = &str;
	std::string &testREF = str;

	std::cout << "The memory address of the " << GREEN << "string" << RESET \
		<< " is:\t\t\t\t" << RED << &str << RESET << std::endl;
	std::cout << "The memory address of the string using the " << YELLOW \
		<< "pointer" << RESET << " is:\t\t" << RED << testPTR << RESET << std::endl;
	std::cout << "The memory address of the string using the " << BLUE << \
		"reference" << RESET << " is:\t" << RED << &testREF << RESET << std::endl;
	std::cout << "The string is:\t\t\t\t" << GREEN << str << RESET << std::endl;
	std::cout << "The string using the pointer is:\t" << YELLOW << *testPTR << RESET << std::endl;
	std::cout << "The string using the reference is:\t" << BLUE << testREF << RESET << std::endl;
	return (0);
}