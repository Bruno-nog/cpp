/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 19:11:43 by brunogue          #+#    #+#             */
/*   Updated: 2025/09/01 17:37:53 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
        
    public:
        Contact();
        
        void Contacts(const std::string& fn,
                      const std::string& ln,
                      const std::string& nn,
                      const std::string& pn,
                      const std::string& ds);

        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickName() const;
        int getPhoneNumber() const;
        std::string getDarkestSecret() const;
        
        bool isEmpty() const;
};

#endif