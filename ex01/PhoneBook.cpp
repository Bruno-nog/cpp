/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 19:11:40 by brunogue          #+#    #+#             */
/*   Updated: 2025/09/19 15:06:48 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    contactCount = 0;
    totalContacts = 0;
}

void PhoneBook::addContact()
{
    std::string input;
    Contact newContact;

    std::cout << "\n ADDING NEW CONTACT..." << std::endl;

    do {
        std::cout << "first name: ";
        std::getline(std::cin, input);
        if (input.empty()) {
            std::cout << "Name cannot be empty! Try again." << std::endl;
        }
    } while (input.empty());
    newContact.setFirstName(input);

    do {
        std::cout << "Last name: ";
        std::getline(std::cin, input);
        if (input.empty()) {
            std::cout << "Last name cannot be empty! Try again." << std::endl;
        }
    } while (input.empty());
    newContact.setLastName(input);

    do {
        std::cout << "Nick name: ";
        std::getline(std::cin, input);
        if (input.empty()) {
            std::cout << "Nickname cannot be empty! Try again." << std::endl;
        }
    } while (input.empty());
    newContact.setNickName(input);

    while (true)
    {
        std::cout << "phoneNumber: ";
        if (!std::getline(std::cin, input))
        {
            std::cout << "\nInput error. Aborting add contact." << std::endl;
            return;
        }
        if (input.empty()) {
            std::cout << "Phone number cannot be empty! Try again." << std::endl;
            continue;
        }
        if (!phoneNumberVerification(input)) {
            std::cout << "Phone number must contain only digits. Try again." << std::endl;
            continue;
        }
        break;
    }
    newContact.setPhoneNumber(input);

    do {
        std::cout << "darkestSecret: ";
        std::getline(std::cin, input);
        if (input.empty()) {
            std::cout << "Darkest secret cannot be empty! Try again." << std::endl;
        }
    } while (input.empty());
    newContact.setDarkestSecret(input);

    int insertIndex = contactCount % 8;
    contactList[insertIndex] = newContact;
    contactCount++;
    if (totalContacts < 8) {
        totalContacts++;
    }
    std::cout << "Successfully added contact in position " << insertIndex << "!" << std::endl;
}

void PhoneBook::searchContact() const {
    
    if (totalContacts == 0){
        std::cout << "None contacts saved" << std::endl;
    }
    std::cout <<"\n  ▶ LIST OF CONTACTS \n " << std::endl;

    std::cout << std::setw(10) << "Index" << " ▏";
    std::cout << std::setw(10) << "Name" << " ▏";
    std::cout << std::setw(10) << "Last name" << " ▏";
    std::cout << std::setw(10) << "Nickname" << std::endl;
    std::cout << "     -----------------------------------------" << std::endl;

    for (int i = 0; i < totalContacts; i++) {
        std::cout << std::setw(10) << i << " ▏";
        PhoneBook::printFormatted(contactList[i].getFirstName());
        std::cout << " ▏";
        PhoneBook::printFormatted(contactList[i].getLastName());
        std::cout << " ▏";
        PhoneBook::printFormatted(contactList[i].getNickName());
        std::cout << std::endl;
    }

    std::cout << "\n";
    std::string input;

    int index;

    std::cout << "Digit a index of contact to see detail\n";
    std::getline(std::cin, input);

    std::stringstream ss(input);
    if (!(ss >> index) || index < 0 || index > totalContacts) {
        std::cout << "Invalid index! Digit number between 0 and " << (totalContacts - 1) << std::endl;
        return ;
    }

    std::cout << " Contact details " << index << std::endl;
    std::cout << "Name: " << contactList[index].getFirstName() << std::endl;
    std::cout << "Last name: " << contactList[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contactList[index].getNickName() << std::endl;
    std::cout << "Phone number: " << contactList[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << contactList[index].getDarkestSecret() << std::endl;
}


bool PhoneBook::phoneNumberVerification(const std::string& s) const {
    if (s.empty()) {
        return false;
    }

    for (std::string::const_iterator it = s.begin(); it != s.end(); ++it)
    {
        if (!std::isdigit(static_cast<unsigned char>(*it)))
        {
            return false;
        }
    }
    return true;
}

std::string PhoneBook::truncateString(const std::string& str) const {
    if (str.length() > 10) {
        return str.substr(0, 9) + ".";
    }
    return str;
}

void PhoneBook::printFormatted(const std::string& str) const {

    std::string formatted = truncateString(str);
    std::cout << std::setw(10) << formatted;
}
