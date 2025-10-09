/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:10:04 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/09 17:58:37 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account() : _accountIndex(_nbAccounts), _amount(0), _nbDeposits(0), _nbWithdrawals(0) {}

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit),
	_nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += initial_deposit;

	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << initial_deposit << ";created\n";
}

Account::~Account()
{
	_nbAccounts--;

	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
}

int	Account::getNbAccounts()
{
	return _nbAccounts;
}

int	Account::getTotalAmount()
{
	return _totalAmount;
}

int	Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits
		<< ";withdrawals:" << _totalNbWithdrawals << '\n';
}

void Account::makeDeposit(int deposit)
{
	_nbDeposits++;
	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;

	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount - deposit
		<< ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << '\n';
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (_amount - withdrawal < 0)
	{
		Account::_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused\n";
		return false;
	}

	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;

	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount + withdrawal
		<< ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << '\n';

	return true;
}

int	Account::checkAmount() const
{
	return _amount;
}

void Account::displayStatus() const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
		<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << '\n';
}

void Account::_displayTimestamp()
{
	std::time_t	now = time(NULL);
	std::tm	*currTime = localtime(&now);

	char timestamp[19];
	strftime(timestamp, 19, "[%Y%m%d_%H%M%S] ", currTime);
	timestamp[18] = '\0';

	std::cout << timestamp;
}
