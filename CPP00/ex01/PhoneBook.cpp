/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 10:47:08 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/05 11:16:49 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	PhoneBook::FindOldestContact() const {
	int	OldestIndex = 0;

	for (int i = 0; i < 8; ++i) {
		if (std::difftime(CreationDate[OldestIndex], CreationDate[i]) > 0)
			OldestIndex = i;
	}
	return (OldestIndex);
}

int	PhoneBook::PrintTable() const {
	int	i = 0;

	if (FirstName[i].empty()) {
		std::cout << "No contct in the PhoneBook" << std::endl;
		return (1);
	}
	std::cout << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << '|' << std::setw(10) << "Index" << '|';
	std::cout << '|' << std::setw(10) << "First Name" << '|';
	std::cout << '|' << std::setw(10) << "Last Name" << '|';
	std::cout << '|' << std::setw(10) << "Nick Name" << '|' << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	while (!FirstName[i].empty() && i < 8) {
		std::cout << '|' << std::setw(10) << i + 1 << '|';
		if (FirstName[i].length() > 10)
			std::cout << std::setw(10) << FirstName[i].substr(0, 9) + "." << '|';
		else
			std::cout << std::setw(10) << FirstName[i] << '|';
		if (LastName[i].length() > 10)
			std::cout << std::setw(10) << LastName[i].substr(0, 9) + "." << '|';
		else
			std::cout << std::setw(10) << LastName[i] << '|';
		if (NickName[i].length() > 10)
			std::cout << std::setw(10) << NickName[i].substr(0, 9) + "." << '|';
		else
			std::cout << std::setw(10) << NickName[i] << '|' << std::endl;
		std::cout << "--------------------------------------------" << std::endl;
		i++;
	}
	std::cout << std::endl;
	return (0);
}

void	PhoneBook::search(int index) const {
	if (FirstName[index - 1].empty()) {
		std::cout << "Index " << index << " does not exist!" << std::endl;
		return ;
	}
	std::cout << std::endl;
	std::cout << "First Name: " << FirstName[index - 1] << std::endl;
	std::cout << "Last Name: " << LastName[index - 1] << std::endl;
	std::cout << "Nick Name: " << NickName[index - 1] << std::endl;
	std::cout << "Phone Number: " << PhoneNumber[index - 1] << std::endl;
	std::cout << "Darkest Secret: " << DarkestSecret[index - 1] << std::endl;
	std::cout << std::endl << std::endl;
}

void	PhoneBook::add(Contact contact) {
	for (int i = 0; i < 9; ++i) {
		if (i == 8 || FirstName[i].empty()) {
			if (contact.getFirstName().empty() || contact.getLastName().empty() ||\
			contact.getNickName().empty() || contact.getPhoneNumber().empty() ||\
			contact.getDarkestSecret().empty()) {
				std::cout << "Empty fields not allowed" << std::endl;
				break ;
			}
			if (i == 8)
				i = FindOldestContact();
			FirstName[i] = contact.getFirstName();
			LastName[i] = contact.getLastName();
			NickName[i] = contact.getNickName();
			PhoneNumber[i] = contact.getPhoneNumber();
			DarkestSecret[i] = contact.getDarkestSecret();
			CreationDate[i] = std::time(NULL);
			std::cout << "The contact was succesfully added" << std::endl;
			break ;
		}
	}
}