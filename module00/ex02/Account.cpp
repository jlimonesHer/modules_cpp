/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlimones <jlimones@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:40:12 by jlimones          #+#    #+#             */
/*   Updated: 2023/06/13 19:40:15 by jlimones         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/* [19920104_091532] index:1;amount:54;created */
Account::Account( int initial_deposit )
{
	this->_accountIndex = this->getNbAccounts();
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	this->_nbDeposits = 1;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
}
Account::~Account( void )
{
	Account::_displayTimestamp();
	Account::_nbAccounts--;
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
}
int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

/* [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0 */
void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout 	
				<< "accounts:" << getNbAccounts() << ";"
				<< "total:" << getTotalAmount() << ";"
				<< "deposits:" << getNbDeposits() << ";"
				<< "withdrawals:" << getNbWithdrawals() << std::endl;
}
Account::Account( void )
{
}

void Account::_displayTimestamp( void )
{
	time_t	now;
	tm		*local;

	now = time(0);
	local = localtime(&now);
	std::cout << "[" << local->tm_year + 1900;
    std::cout << std::setfill('0') << std::setw(2) << local->tm_mon + 1;
    std::cout << std::setfill('0') << std::setw(2) << local->tm_mday << "_";
    std::cout << std::setfill('0') << std::setw(2) << local->tm_hour;
    std::cout << std::setfill('0') << std::setw(2) << local->tm_min;
    std::cout << std::setfill('0') << std::setw(2) << local->tm_sec << "] ";
}

/* index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1 */
void	    Account::makeDeposit( int deposit )
{
	
	_displayTimestamp();
	std::cout 	
			<< "index:" << _accountIndex << ";"
			<< "p_amount:" << _amount << ";"
			<< "deposits:" << deposit << ";";
	this->_amount += deposit;
	_totalAmount += deposit;
	std::cout
			<< "amount:" << _amount << ";" 
			<< "nb_deposit:" << _nbDeposits
			<< std::endl;
}

/*[19920104_091532] index:0;p_amount:47;withdrawal:refused*/
bool	    Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout 
		<< "index:" << _accountIndex << ";"
		<< "p_amount:" << _amount << ";"
		<< "withdrawal:";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused" << std::endl;
		return false;
	}
	else
	{
		this->_amount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout
			<< withdrawal << ";"
			<< "amount:" << _amount << ";" 
			<< "nb_withdrawals:" << _nbWithdrawals
			<< std::endl;
	}
	return (true);
}

int		    Account::checkAmount( void ) const
{
	return this->_amount;
}

/*[19920104_091532] index:0;amount:42;deposits:0;withdrawals:0*/
void	    Account::displayStatus( void )const
{
	_displayTimestamp();
	std::cout 	
				<< "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "deposits:" << _nbDeposits << ";"
				<< "withdrawals:" << _nbWithdrawals << std::endl;
}
