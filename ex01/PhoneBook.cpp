/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 20:10:06 by plichota          #+#    #+#             */
/*   Updated: 2026/01/18 16:18:49 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	count = 0;
	// std::cout << "constructor PhoneBook called" << std::endl;
}

// aggiunge contatto, se sono più di 8 sovrascrive il piu' vecchio
int PhoneBook::addContact(const Contact &contact)
{
	if (count < 8)
	{
		contacts[count] = contact;
		count++;
	}
	else
	{
		for (int i = 0; i < 7; i++)
		{
			contacts[i] = contacts[i + 1];
		}
		contacts[7] = contact;
	}
	return (0);
}

int	PhoneBook::searchContact()
{
	std::string	s;
	long l;
	char *end;

	if (count == 0)
	{
		std::cout << "Empty phonebook" << std::endl;
		return (0);
	}
	std::cout << CYAN << "i|First name| Last name|  Nickname" << RESET << std::endl;		
	for (int i = 0; i < count; i++)
	{
		std::cout << i;
		contacts[i].printPartialContact();
		std::cout << std::endl;
	}
	do
	{
		std::cout << GREEN << "Select a valid index: " << RESET;
		std::getline(std::cin, s);
		l = std::strtol(s.c_str(), &end, 10);
	} while (std::cin.fail() || !end || *end != '\0'|| l < 0 || l > count - 1);
	contacts[l].printFullContact();
	return (0);
}
