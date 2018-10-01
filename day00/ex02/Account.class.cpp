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

Account::Account(int initial_deposit)
{
	;
}

Account::~Account(void)
{
	;
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
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
	<< ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals
	<< std::endl;
}

void	Account::makeDeposit(int deposit)
{
	;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	;
}

int		Account::checkAmount(void) const
{
	;
}

void	Account::displayStatus(void) const
{
	;
}

void	Account::_displayTimestamp(void)
{
	;
}

Account::Account(void)
{
	;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;