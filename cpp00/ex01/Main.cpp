/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 17:29:15 by brunogue          #+#    #+#             */
/*   Updated: 2025/09/26 17:48:39 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    PhoneBook phoneBook;
    std::string command;

    std::cout << " PHONEBOOK " << std::endl;
    std::cout << " commands: ADD, SEARCH, EXIT" << std::endl;

    while(true) {
        if (feof(stdin)) break;
        std::cout << "\n> Enter a command: ";
        std::getline(std::cin, command);
        if (command == "ADD") {
            phoneBook.addContact();
        }
        else if (command == "SEARCH") {
            phoneBook.searchContact();
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