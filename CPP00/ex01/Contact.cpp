/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 10:33:19 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/05 12:54:10 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::add(std::string first, std::string last, std::string nick, \
	std::string phone, std::string secret)
{
	FirstName = first;
	LastName = last;
	NickName = nick;
	PhoneNumber = phone;
	DarkestSecret = secret;
}

std::string Contact::getFirstName() const {
	return (FirstName);
}

std::string Contact::getLastName() const {
	return (LastName);
}

std::string Contact::getNickName() const {
	return (NickName);
}

std::string Contact::getPhoneNumber() const {
	return (PhoneNumber);
}

std::string Contact::getDarkestSecret() const {
	return (DarkestSecret);
}