/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdelicad <rdelicad@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:25:04 by rdelicad          #+#    #+#             */
/*   Updated: 2024/02/27 14:25:07 by rdelicad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <chrono>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
	: _accountIndex(_nbAccounts),
	  _amount(initial_deposit),
	  _nbDeposits(0),
	  _nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout	<< " index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";created" << std::endl;
}

Account::~Account( void )
{
	_nbAccounts--;
	_totalAmount -= _amount;
	Account::_displayTimestamp();
	std::cout	<< " index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";closed" << std::endl;
}

void	Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout	<< " accounts:" << _nbAccounts
				<< ";total:" << _totalAmount
				<< ";deposit:" << _totalNbDeposits
				<< ";withdrawals:" << _totalNbWithdrawals
				<< std::endl;
}

int	Account::getNbAccounts( void ) { return ( _nbAccounts ); }
int Account::getTotalAmount( void ) { return ( _totalAmount ); }
int Account::getNbDeposits( void ) { return ( _totalNbDeposits ); }
int Account::getNbWithdrawals( void ) { return ( _totalNbWithdrawals ); }

void	Account::makeDeposit( int deposit )
{
	int pAmount = _amount;
	_amount	+= deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout	<< " index:" << _accountIndex
				<< ";p_amount:" << pAmount
				<< ";deposit:" << deposit
				<< ";amount:" << _amount
				<< ";nb_deposits:" << _nbDeposits
				<< std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
	int pAmount = _amount;
	if (withdrawal <= _amount)
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		Account::_displayTimestamp();
		std::cout	<< " index:" << _accountIndex
					<< ";p_amount:" << pAmount
					<< ";withdrawal:" << withdrawal
					<< ";amount:" << _amount
					<< ";nb_withdrawals:" << _nbWithdrawals
					<< std::endl;
		return true;
	}
	else
	{
		Account::_displayTimestamp();
		std::cout	<< " index:" << _accountIndex
					<< ";p_amount:" << pAmount
					<< ";withdrawal:refused" 
					<< std::endl;
		return false;
	}
}

int	Account::checkAmount( void ) const { return _amount; }

void Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout	<< " index:" << _accountIndex
				<< ";amount:" << _amount
				<< ";deposits:" << _nbDeposits
				<< ";withdrawals:" << _nbWithdrawals
				<< std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
	std::time_t time_now = std::chrono::system_clock::to_time_t(now);
	std::tm *time_struct = std::localtime(&time_now);
	std::cout << "[" << std::put_time(time_struct, "%Y%m%d_%H%M%S") << "]";	
}