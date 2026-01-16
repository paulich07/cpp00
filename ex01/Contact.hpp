/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plichota <plichota@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 01:10:48 by plichota          #+#    #+#             */
/*   Updated: 2026/01/16 13:27:08 by plichota         ###   ########.fr       */
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
    std::string phone;
    std::string darkest_secret;
  public:
    Contact();
    Contact(std::string first_name,
            std::string last_name,
            std::string nickname,
            std::string phone,
            std::string darkest_secret
          );
    void printFullContact();
    void printPartialContact();
};

#endif