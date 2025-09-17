/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 19:11:40 by brunogue          #+#    #+#             */
/*   Updated: 2025/09/17 18:10:07 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
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
}