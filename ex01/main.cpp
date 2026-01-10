/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 01:10:46 by plichota          #+#    #+#             */
/*   Updated: 2026/01/10 17:20:06 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>
#include <iostream>

void addContact(PhoneBook *phonebook)
{
  Contact contact;
  std::string first_name;
  std::string last_name;
  std::string nickname;
  std::string darkest_secret;
  int phone;

  std::cout << "enter first name" << std::endl;
  if (!(std::cin >> first_name))
  {
    std::cout << "Error reading first name." << std::endl;
    return;
  }
  std::cout << "enter last name" << std::endl;
  if (!(std::cin >> last_name))
  {
    std::cout << "Error reading last name." << std::endl;
    return;
  }
  std::cout << "enter nickname" << std::endl;
  if (!(std::cin >> nickname))
  {
    std::cout << "Error reading nickname." << std::endl;
    return;
  }
  std::cout << "enter darkest secret" << std::endl;
  if (!(std::cin >> darkest_secret))
  {
    std::cout << "Error reading darkest secret." << std::endl;
    return;
  }
  std::cout << "enter phone number" << std::endl;
  if (!(std::cin >> phone))
  {
    std::cout << "Error reading phone number." << std::endl;
    return;
  }
  contact = Contact(first_name, last_name, nickname, darkest_secret, phone);
  phonebook->addContact(contact);
}

int main(void)
{
  PhoneBook phonebook;
  std::string input;

  std::cout << "What do you want to do? Please enter ADD, SEARCH, or EXIT" << std::endl;
  std::cout << "- ADD a contact" << std::endl;
  std::cout << "- SEARCH a contact" << std::endl;
  std::cout << "- EXIT" << std::endl;
  while (1)
  {
    std::cin >> input;
    if (input == "ADD")
      addContact(&phonebook);
    else if (input == "SEARCH")
      phonebook.searchContact();
    else if (input == "EXIT")
      break;
    else
      std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT." << std::endl;
  }
}