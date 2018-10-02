// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Account.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: otiniako <otiniako@student.unit.ua>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/01 22:40:55 by otiniako          #+#    #+#             //
//   Updated: 2018/10/01 22:40:55 by otiniako         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Account.class.hpp"
#include <iomanip>
#include <ctime>

Account::Account(int initial_deposit)
{
	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = this->_nbAccounts;
	this->_amount = initial_deposit;

	_displayTimestamp();
	std::cout << "index:" << (this->_accountIndex - 1) <<
		";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << (this->_accountIndex - 1) << ";amount:"
	<< this->_amount << ";closed" << std::endl;
}

int		Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int		Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int		Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts
	<< ";total:" << Account::_totalAmount
	<< ";deposits:" << Account::_totalNbDeposits
	<< ";withdrawals:" << Account::_totalNbWithdrawals
	<< std::endl;
}

void	Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	this->_nbDeposits += 1;
	this->_totalAmount += deposit;
	this->_totalNbDeposits += 1;

	_displayTimestamp();
	std::cout << "index:" << (this->_accountIndex - 1) << ";p_amount:"
	<< (this->_amount - deposit) << ";deposit:" << deposit << ";amount:"
	<< this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (this->_amount < withdrawal)
	{
		_displayTimestamp();
		std::cout << "index:" << (this->_accountIndex - 1) << ";p_amount:"
		<< this->_amount <<  ";withdrawal:" << "refused" << std::endl;
		return (false);
	}
	else
	{
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals += 1;
		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;
		_displayTimestamp();
		std::cout << "index:" << (this->_accountIndex - 1) << ";p_amount:"
		<< (this->_amount + withdrawal) <<  ";withdrawal:" << withdrawal
		<< ";amount:" << this->_amount << ";nb_withdrawals:"
		<< this->_nbWithdrawals << std::endl;
	}
	return (true);
}

int		Account::checkAmount(void) const
{
	return this->_amount;

}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << (this->_accountIndex - 1) << ";amount:"
	<< this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:"
	<< this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	static time_t	t;
	struct tm		*time_stamp;

	time_stamp = localtime(&(t = time(0)));
	std::cout << '[' << time_stamp->tm_year + 1900
	<< std::setw(2) << std::setfill('0') << time_stamp->tm_mon
	<< std::setw(2) << std::setfill('0') << time_stamp->tm_mday << '_'
	<< std::setw(2) << std::setfill('0') << time_stamp->tm_hour
	<< std::setw(2) << std::setfill('0') << time_stamp->tm_min
	<< std::setw(2) << std::setfill('0') << time_stamp->tm_sec << "] ";
}

Account::Account(void)
{
	;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;