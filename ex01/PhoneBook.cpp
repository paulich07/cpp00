/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 01:10:55 by plichota          #+#    #+#             */
/*   Updated: 2026/01/10 17:55:36 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
  count = 0;
}

void PhoneBook::addContact(Contact newContact)
{
  if (count < 8)
  {
    contacts[count] = newContact;
    count++;
  }
  else
  {
    for (size_t i = 0; i < count; i++)
    {
      contacts[i] = contacts[i + 1];
    }
    contacts[count - 1] = newContact;
  }
}