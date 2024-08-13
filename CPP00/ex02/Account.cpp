/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdeson <pdeson@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:24:40 by pdeson            #+#    #+#             */
/*   Updated: 2024/08/05 12:46:07 by pdeson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

/* Initialisation des variable privees */
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/* Definition des methodes get* */
int	Account::getNbAccounts( void ) {
	return (_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return (_totalAmount);
}

int	Account::getNbDeposits( void ) {
	return (_totalNbDeposits);	
}

int	Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:"\
		<< getTotalAmount() << ";deposits:" << getNbDeposits()\
		<< ";withdrawals:" << getNbWithdrawals() << std::endl;
}

/* Constructeur */
Account::Account( int initial_deposit ) {
	_displayTimestamp();
	_totalAmount += initial_deposit;
	_nbAccounts += 1;
	_accountIndex = _nbAccounts -1;
	_amount = initial_deposit;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	std::cout << "index:" << _accountIndex << ";amount:" \
		<< checkAmount() << ";created" << std::endl;
}

/* Destucteur */
Account::~Account( void )
 {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" \
		<< checkAmount() << ";closed" << std::endl;
 }

int		Account::checkAmount( void ) const {
	return (_amount);
}

void	Account::makeDeposit( int deposit ) {
	_displayTimestamp();
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	std::cout << "index:" << _accountIndex << ";p_amount:" << checkAmount() \
		<< ";deposit:" << deposit << ";amount:" << checkAmount() + deposit \
		<< ";nb_deposits:" << _nbDeposits << std::endl;
	_amount += deposit;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	if (withdrawal > checkAmount()) {
		std::cout << "index:" << _accountIndex << ";p_amount:" \
		<< checkAmount() << ";withdrawals:refused" << std::endl;
		return (0);
	}
	else {
		_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		std::cout << "index:" << _accountIndex << ";p_amount:" << checkAmount() \
			<< ";withdrawals:" << withdrawal << ";amount:" << checkAmount() - withdrawal \
			<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		return (0);
	}
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" \
		<< checkAmount() << ';' << "deposits:" << _nbDeposits << ";Withdrawals:" \
		<< _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ) {
	std::time_t currentTime = std::time(NULL);
	std::tm	when = *std::localtime(&currentTime);

	std::cout << '[' << when.tm_year + 1900 << std::setfill('0') << std::setw(2) \
		<< when.tm_mon + 1 << std::setfill('0') << std::setw(2) << when.tm_mday << '_' \
		<< std::setfill('0') << std::setw(2) << when.tm_hour \
		<< std::setfill('0') << std::setw(2) << when.tm_min \
		<< std::setfill('0') << std::setw(2) << when.tm_sec << "] ";
}
