/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:05:12 by tbelleng          #+#    #+#             */
/*   Updated: 2023/09/14 22:33:04 by tbelleng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::~Account(void)
{
    this -> _displayTimestamp();
    std::cout << "index:" << this -> _accountIndex << ";"
              << "amount:" << this -> _amount << ";"
              << "closed" << std::endl;
}

Account::Account(int initial_deposit)
{
    this -> _displayTimestamp();
    this -> _accountIndex = _nbAccounts;
    this -> _amount = initial_deposit;
    std::cout << "index:" << this -> _accountIndex << ";"
              << "amount:" << this -> _amount << ";"
              << "created" << std::endl;
    _nbAccounts++;
    _totalAmount += this -> _amount;
    this -> _nbDeposits = 0;
    this -> _nbWithdrawals = 0;
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout
        << "accounts:" << _nbAccounts << ";"
        << "total:" << _totalAmount << ";"
        << "deposits:" << _totalNbDeposits << ";"
        << "withdrawals:" << _totalNbWithdrawals
        << std::endl ;
}

void Account::makeDeposit(int deposit)
{
    this -> _displayTimestamp();
    this -> _amount += deposit;
    std::cout << "index:" << this -> _accountIndex << ";" << "p_amount:" << this -> _amount - deposit << ";" << "deposit:" << deposit << ";" << "amount:" << this -> _amount << ";"
            << "nb_deposits:" << ++this -> _nbDeposits
            << std::endl;
    ++_totalNbDeposits;
    _totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
    this -> _displayTimestamp();
    if (this -> _amount - withdrawal < 0)
    {
        std::cout << "index:" << this -> _accountIndex << ";" << "p_amount:" << this -> _amount << ";" << "withdrawal:refused" << std::endl;
        return (false);
    }
    this -> _amount -= withdrawal;
    std::cout << "index:" << this -> _accountIndex << ";" << "p_amount:" << this -> _amount + withdrawal << ";" << "withdrawal:" << withdrawal << ";" << "amount:" << this -> _amount << ";"
        << "nb_withdrawals:" << ++this -> _nbWithdrawals << std::endl;
    _totalNbWithdrawals++;
    _totalAmount -= withdrawal;
    return (true);
}


void Account::_displayTimestamp(void)
{
    std::time_t *result = NULL;
    std::time_t res = std::time(result);
    std::cout << "[" << res << "] ";
    return ;
}

void Account::displayStatus(void) const
{
    this -> _displayTimestamp();
    std::cout << "index:" << this -> _accountIndex << ";" << "amount:" << this -> _amount << ";" << "deposits:" << this -> _nbDeposits << ";"<< "withdrawals:" << this -> _nbWithdrawals << std::endl;
    return ;
}

int Account::getNbAccounts(void)
{
    return _nbAccounts;
}

int Account::getTotalAmount(void)
{
    return _totalAmount;
}

int Account::getNbDeposits(void)
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return _totalNbWithdrawals;
}

int Account::checkAmount(void) const
{
    return this -> _amount;
}