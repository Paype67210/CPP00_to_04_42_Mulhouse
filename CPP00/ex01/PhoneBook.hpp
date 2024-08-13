/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 10:40:54 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/05 11:15:53 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include <iostream>
# include <string>
# include <ctime>
# include "Contact.hpp"

class PhoneBook
{
private:
	
	std::string FirstName[9];
	std::string LastName[9];
	std::string NickName[9];
	std::string PhoneNumber[9];
	std::string DarkestSecret[9];
	std::time_t	CreationDate[9];
	int	FindOldestContact() const;

public:

	int		PrintTable() const;
	void	add(Contact contact);
	void	search(int index) const;
};

#endif