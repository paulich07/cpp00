/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 01:10:46 by plichota          #+#    #+#             */
/*   Updated: 2026/01/17 16:20:38 by plichota         ###   ########.fr       */
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
  while (!std::getline(std::cin, first_name) || first_name.empty())
  {
    std::cout << "Error reading first name." << std::endl;
    std::cout << "Enter first name: ";
  }
  std::cout << "Enter last name: ";
  while (!std::getline(std::cin, last_name) || last_name.empty()) // getline
  {
    std::cout << "Error reading last name." << std::endl;
    std::cout << "Enter last name: ";
  }
  std::cout << "Enter nickname: ";
  while (!std::getline(std::cin, nickname) || nickname.empty())
  {
    std::cout << "Error reading nickname." << std::endl;
    std::cout << "Enter nickname: ";
  }
  std::cout << "Enter phone number: ";
  while (!std::getline(std::cin, phone) || phone.empty())
  {
    std::cout << "Error reading phone number." << std::endl;
    std::cout << "Enter phone number: ";
  }
  std::cout << "Enter darkest secret: ";
  while (!std::getline(std::cin, darkest_secret) || darkest_secret.empty())
  {
    std::cout << "Error reading darkest secret." << std::endl;
    std::cout << "Enter darkest secret: ";
  }
  contact = Contact(first_name, last_name, nickname, phone, darkest_secret);
  phonebook->addContact(contact);
}

int main(void)
{
  PhoneBook phonebook;
  std::string input;

  // Mock contacts
  Contact contact1("John", "Doe", "Johnny", "1234567890", "Loves pizza");
  Contact contact2("Jane", "Smith", "Janey", "0987654321", "Afraid of spiders");
  phonebook.addContact(contact1);
  phonebook.addContact(contact2);
  phonebook.addContact(contact1);
  phonebook.addContact(contact2);
  phonebook.addContact(contact1);
  phonebook.addContact(contact2);
  phonebook.addContact(contact2);

  while (1)
  {
    std::cout << GREEN << "What do you want to do? Please enter ADD, SEARCH, or EXIT" << RESET << std::endl;
    std::getline(std::cin, input);
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
