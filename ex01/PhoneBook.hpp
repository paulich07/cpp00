/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 01:10:57 by plichota          #+#    #+#             */
/*   Updated: 2026/01/10 17:51:20 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
  private:
    Contact contacts[8];
    int count;
  public:
    PhoneBook();

    void addContact(Contact newContact);
    void searchContact(std::string input);
    // void displayPhoneBook();
};

#endif