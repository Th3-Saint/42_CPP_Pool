/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 09:42:39 by mrobaii           #+#    #+#             */
/*   Updated: 2022/12/20 15:53:27 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

/**********			CONSTARCTER			*************/
Account::Account( int initial_deposit )
{
	
	this->_amount = initial_deposit;
	this->_accountIndex = 0;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	this->_accountIndex = _nbAccounts - 1;
	this->_nbWithdrawals = 0;
	this->_nbDeposits = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
	return ;
}

int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "amount:" << _amount << ";closed" << std::endl;
	return ;
}
/*------------	GET ACCOUNTS DETAILS -------------------*/

int Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(  void )
{
	return (_totalNbWithdrawals);
}



void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
	this->_nbDeposits = this->_nbDeposits + 1;
	this->_amount = this->_amount + deposit;
	std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << "\n";
	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal > this->_amount)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused\n";
		return (false);
	}
	this->_amount = this->_amount - withdrawal;
	this->_nbWithdrawals = this->_nbWithdrawals + 1;
	_totalNbWithdrawals += 1;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal;
	std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << "\n";
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:";
	std::cout << _totalNbDeposits<< ";withdrawals:" << _totalNbWithdrawals << std::endl; 
	return ;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:";
	std::cout << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
	return ;
}

void	Account::_displayTimestamp( void )
{
	time_t now = time(0);
	tm *timeinfo;
	
	timeinfo = localtime(&now);
	
	std::cout << "[" << 1900 + timeinfo->tm_year << timeinfo->tm_mon + 1 << timeinfo->tm_mday << "_";
	std::cout << timeinfo->tm_hour << timeinfo->tm_min  << timeinfo->tm_sec << "] ";
	return ;
}
