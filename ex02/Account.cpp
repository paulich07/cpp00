/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 16:16:20 by plichota          #+#    #+#             */
/*   Updated: 2026/01/17 17:04:21 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include "iostream"

int  Account::_nbAccounts = 0;
int  Account::_totalAmount = 0;
int  Account::_totalNbDeposits = 0;
int  Account::_totalNbWithdrawals = 0;

// per non chiamare due volte il costruttore
// (quello parametrizzato chiama comunque quello di default,
// copia i valori e distrugge vecchia istanza )
Account::Account(int initial_deposit):
    _accountIndex(0),
    _amount(initial_deposit),
    _nbDeposits(0),
    _nbWithdrawals(0)
{
}

Account::~Account()
{
}

int Account::getNbAccounts()
{
    std::cout << "Nb Accounts" << _nbAccounts << std::endl;
    return (_nbAccounts);
}

int Account::getTotalAmount()
{
    std::cout << "Total amount" << _totalAmount << std::endl;
    return (_totalAmount);
}
int Account::getNbDeposits()
{
    std::cout << "_totalNbDeposits" << _totalNbDeposits << std::endl;
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
    std::cout << "getNbWithdrawals" << _totalNbWithdrawals << std::endl;
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
    std::cout << "AccountsInfos" << std::endl;
    getNbAccounts();
    getTotalAmount();
    getNbDeposits();
    getNbWithdrawals();
}

// Private

void Account::makeDeposit(int deposit)
{
    _amount += deposit;
    _nbDeposits++;
    // static
    _totalAmount += deposit;
    _totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
    if (withdrawal > _amount)
        return (false);
    _amount -= withdrawal;
    _nbWithdrawals++;
    // static
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    return (true);
}

int Account::checkAmount() const
{
    std::cout << "amount:" << _amount << std::endl;
    return (_amount);
}

void Account::displayStatus()
{
    
}


void Account::displayTimestamp()
{
    
}