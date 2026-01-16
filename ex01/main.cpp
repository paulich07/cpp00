/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 01:10:46 by plichota          #+#    #+#             */
/*   Updated: 2026/01/16 20:42:39 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>
#include <iostream>

void createContact(PhoneBook *phonebook)
{
  Contact contact;
  std::string first_name;
  std::string last_name;
  std::string nickname;
  std::string darkest_secret;
  std::string phone;

  std::cout << "Enter first name: ";
  while (!(std::cin >> first_name) || first_name.empty())
  {
    std::cout << "Error reading first name." << std::endl;
    return;
  }
  std::cout << "Enter last name: ";
  while (!(std::cin >> last_name) || last_name.empty()) // getline
  {
    std::cout << "Error reading last name." << std::endl;
    return;
  }
  std::cout << "Enter nickname: ";
  while (!(std::cin >> nickname) || nickname.empty())
  {
    std::cout << "Error reading nickname." << std::endl;
    return;
  }
  std::cout << "Enter phone number: ";
  while (!(std::cin >> phone) || phone.empty())
  {
    std::cout << "Error reading phone number." << std::endl;
    return;
  }
  std::cout << "Enter darkest secret: ";
  while (!(std::cin >> darkest_secret) || darkest_secret.empty())
  {
    std::cout << "Error reading darkest secret." << std::endl;
    return;
  }
  contact = Contact(first_name, last_name, nickname, phone, darkest_secret);
  phonebook->addContact(contact);
}

int main(void)
{
  PhoneBook phonebook;
  std::string input;

  while (1)
  {
    std::cout << GREEN << "What do you want to do? Please enter ADD, SEARCH, or EXIT" << RESET << std::endl;
    std::cin >> input;
    if (input == "ADD")
      createContact(&phonebook);
    else if (input == "SEARCH")
        phonebook.searchContact();
    else if (input == "EXIT")
      break;
    else
      std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT." << std::endl;
  }
}