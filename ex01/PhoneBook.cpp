/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 19:11:40 by brunogue          #+#    #+#             */
/*   Updated: 2025/09/18 16:32:35 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <iomanip>
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
            std::cout << "Nick name cannot be empty! Try again." << std::endl;
        }
    } while (input.empty());
    newContact.setNickName(input);

    do {
        std::cout << "phoneNumber: ";
        std::getline(std::cin, input);
        if (input.empty()) {
            std::cout << "Phone number cannot be empty! Try again." << std::endl;
        }
    } while (input.empty());
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
    std::cout <<"\n LIST OF CONTACTS" << std::endl;
    
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "Name" << "|";
    std::cout << std::setw(10) << "Last name" << "|";
    std::cout << std::setw(10) << "Nickname" << "|" << std::endl;

    for (int i = 0; i < totalContacts; i++) {
        std::cout << std::setw(10) << i << "|";
        printFormatted(contactList[i].getFirstName());
        std::cout << "|";
        printFormatted(contactList[i].getLastName());
        std::cout << "|";
        printFormatted(contactList[i].getNickName());
        std::cout << std::endl;
    }
    
    std::string input;
    
    int index;
    
    std::cout << "Digit a index of contact to see details";
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