/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 16:16:20 by plichota          #+#    #+#             */
/*   Updated: 2026/01/17 19:23:30 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include "iostream"
#include "ctime"
#include "iomanip"

int  Account::_nbAccounts = 0;
int  Account::_totalAmount = 0;
int  Account::_totalNbDeposits = 0;
int  Account::_totalNbWithdrawals = 0;

// per non chiamare due volte il costruttore
// (quello parametrizzato chiama comunque quello di default,
// copia i valori e distrugge vecchia istanza )
Account::Account(int initial_deposit):
    _accountIndex(_nbAccounts++),
    _amount(initial_deposit),
    _nbDeposits(0),
    _nbWithdrawals(0)
{
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int Account::getNbAccounts()
{
    return (_nbAccounts);
}

int Account::getTotalAmount()
{
    return (_totalAmount);
}
int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << " accounts:" << getNbAccounts();
    std::cout << ";total:" << getTotalAmount();
    std::cout << ";deposits:" << getNbDeposits();
    std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

// Private

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    std::cout << ";deposit:" << deposit;

    _amount += deposit;
    _nbDeposits++;
    // static
    _totalAmount += deposit;
    _totalNbDeposits++;

    std::cout << ";amount:" << _amount;
    std::cout << ";nb_deposits:" << _nbDeposits << std::endl;;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    if (withdrawal > _amount)
    {
        std::cout << ";withdrawal:refused" << std::endl;
        return (false);
    }
    _amount -= withdrawal;
    _nbWithdrawals++;
    // static
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    std::cout << ";withdrawal:" << withdrawal;
    std::cout << ";amount:" << _amount;
    std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return (true);
}

int Account::checkAmount() const
{
    std::cout << "amount:" << _amount << std::endl;
    return (_amount);
}

// to do
void Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp()
{
    time_t timestamp = time(NULL);
    struct tm dt = *localtime(&timestamp);

    std::cout << "[" << (dt.tm_year + 1900);
    std::cout << std::setw(2) << std::setfill('0') << (dt.tm_mon + 1);
    std::cout << std::setw(2) << std::setfill('0') << dt.tm_mday;
    std::cout << "_" << std::setw(2) << std::setfill('0') << dt.tm_hour;
    std::cout << std::setw(2) << std::setfill('0') << dt.tm_min;
    std::cout << std::setw(2) << std::setfill('0') << dt.tm_sec << "]";
}
