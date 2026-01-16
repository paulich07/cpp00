/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 20:10:06 by plichota          #+#    #+#             */
/*   Updated: 2026/01/16 13:57:03 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	count = 0;
	std::cout << "constructor PhoneBook called" << std::endl;
}

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
