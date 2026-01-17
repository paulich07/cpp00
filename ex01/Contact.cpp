/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 20:23:36 by plichota          #+#    #+#             */
/*   Updated: 2026/01/17 13:21:23 by plichota         ###   ########.fr       */
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
  std::cout << std::setw(13) << std::left << "First name: " << first_name << std::endl;
  std::cout << std::setw(13) << std::left << "Last name: " << last_name << std::endl;
  std::cout << std::setw(13) << std::left << "Nickname: " << nickname << std::endl;
  std::cout << std::setw(13) << std::left << "Phone: " << phone << std::endl;
  std::cout << std::setw(13) << std::left << "Secret: " << darkest_secret << std::endl;
}

void Contact::printPartialContact()
{
  std::cout << " | " << std::setw(10) << std::left << first_name.substr(0, 10);
  std::cout << " | " << std::setw(10) << std::left << last_name.substr(0, 10);
  std::cout << " | " << std::setw(10) << std::left << nickname.substr(0, 10);
}
