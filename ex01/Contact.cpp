/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 20:23:36 by plichota          #+#    #+#             */
/*   Updated: 2026/01/18 16:19:27 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact()
{
  first_name = "";
  last_name = "";
  nickname = "";
  darkest_secret = "";
  phone = "";
}

Contact::Contact(std::string first_name, std::string last_name, 
                 std::string nickname, std::string phone, std::string darkest_secret)
{
  this->first_name = first_name;
  this->last_name = last_name;
  this->nickname = nickname;
  this->darkest_secret = darkest_secret;
  this->phone = phone;
}

void Contact::printFullContact()
{
  std::cout << std::setw(12) << std::right << "First name: " << first_name << std::endl;
  std::cout << std::setw(12) << std::right << "Last name: " << last_name << std::endl;
  std::cout << std::setw(12) << std::right << "Nickname: " << nickname << std::endl;
  std::cout << std::setw(12) << std::right << "Phone: " << phone << std::endl;
  std::cout << std::setw(12) << std::right << "Secret: " << darkest_secret << std::endl;
}

void Contact::printPartialContact()
{
  std::string first = (first_name.length() > 10) ? first_name.substr(0, 10).replace(9, 1, 1, '.') : first_name;
  std::string last = (last_name.length() > 10) ? last_name.substr(0, 10).replace(9, 1, 1, '.') : last_name;
  std::string nick = (nickname.length() > 10) ? nickname.substr(0, 10).replace(9, 1, 1, '.') : nickname;

  std::cout << "|" << std::setw(10) << std::right << first;
  std::cout << "|" << std::setw(10) << std::right << last;
  std::cout << "|" << std::setw(10) << std::right << nick;
}
