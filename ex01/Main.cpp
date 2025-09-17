/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 17:29:15 by brunogue          #+#    #+#             */
/*   Updated: 2025/09/17 16:37:18 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main()
{
    PhoneBook phoneBook;
    std::string command;

    std::cout << " AWESOME PHONEBOOK " << std::endl;
    std::cout << " commands: ADD, SEARCH, EXIT" << std::endl;
    
    while(true) {
        std::cout << "\n> Enter a command: ";
        std::getline(std::cin, command);

        if (command == "ADD") {
            phoneBook.addContact();
        }
        else if (command == "SEARCH") {
            phoneBook.addContact();
        }
        else if (command == "EXIT") {
            std::cout << "Bye! all contacts will be lost forever!" << std::endl;
            break;
        }
        else {
            std::cout << "not recognize command. Use: ADD, SEARCH OR EXIT" << std::endl;
        }
    }
    return (0);
}