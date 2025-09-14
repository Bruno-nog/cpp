/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 17:16:20 by brunogue          #+#    #+#             */
/*   Updated: 2025/09/14 17:53:16 by marvin           ###   ########.fr       */
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
        int     currentIndex;
        int     totalContacts;

    public:
        PhoneBook();
        
        void    addContact();
        void    searchContact() const;

        std::string truncateString(const std::string& str) const;
        void    printFormatted(const std::string& str) const;
};

#endif