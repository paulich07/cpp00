/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 20:10:06 by plichota          #+#    #+#             */
/*   Updated: 2026/01/17 12:48:08 by plichota         ###   ########.fr       */
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
	int	index;

	if (count == 0)
	{
		std::cout << "Empty phonebook" << std::endl;
		return (0);
	}
	for (int i = 0; i < count; i++)
	{
		std::cout << i;
		contacts[i].printPartialContact();
		std::cout << std::endl;
	}
	std::cout << "Select a valid index: ";
	std::cin >> index;
	// usa stringstream
	while (std::cin.fail() || index < 0 || index > count - 1)
	{
		std::cout << "Error, select a valid index: ";
		std::cin >> index;
	}
	contacts[index].printFullContact();
	return (0);
}
