/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 17:16:20 by brunogue          #+#    #+#             */
/*   Updated: 2025/09/18 17:17:06 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contactList[8];
        int     totalContacts;
        int     contactCount;

    public:
        PhoneBook();
        
        void    addContact();
        void    searchContact() const;

        std::string truncateString(const std::string& str) const;
        void    printFormatted(const std::string& str) const;
};

#endif