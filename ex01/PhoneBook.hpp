/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 01:10:57 by plichota          #+#    #+#             */
/*   Updated: 2026/01/16 20:43:22 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#define RESET   "\033[0m"
#define GREEN   "\033[32m"

#include "Contact.hpp"
#include "cstdlib"
#include "iostream"
#include "iomanip"


class PhoneBook
{
  private:
    Contact contacts[8];
    int count;
  public:
    PhoneBook();

    int addContact(const Contact &contact);
    int searchContact();
};

#endif