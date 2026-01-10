/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 01:10:48 by plichota          #+#    #+#             */
/*   Updated: 2026/01/10 17:46:42 by plichota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
  private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string darkest_secret;
    int phone;
  public:
    Contact();
    Contact(std::string first_name,
            std::string last_name,
            std::string nickname,
            std::string darkest_secret,
            int phone
          );
    void printFullContact();
    void printPartialContact();
};

#endif