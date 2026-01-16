/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 01:10:57 by plichota          #+#    #+#             */
/*   Updated: 2026/01/16 13:52:14 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include "cstdlib"
#include "iostream"

class PhoneBook
{
  private:
    Contact contacts[8];
    int count;
  public:
    PhoneBook();

    int addContact(Contact newContact);
    int searchContact(std::string input);
    // void displayPhoneBook();
};

#endif