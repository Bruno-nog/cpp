/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 19:23:30 by brunogue          #+#    #+#             */
/*   Updated: 2025/09/17 17:33:45 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){}

Contact::Contact(std::string& firstName, std::string& lastName, std::string& nickName, std::string& phoneNumber, std::string& darkestSecret)
{
    this->firstName = firstName;
    this->nickName = nickName;
    this->lastName = lastName;
    this->phoneNumber = phoneNumber;
    this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName() const
{
    return firstName;
}

std::string Contact::getNickName() const
{
    return nickName;
}

std::string Contact::getLastName() const
{
    return lastName;
}

std::string Contact::getPhoneNumber() const
{
    return phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
    return darkestSecret;
}

// Setters

void Contact::setFirstName(std::string& firstName)
{
    this->firstName = firstName;
}

void Contact::setNickName(std::string& nickName)
{
    this->nickName = nickName;
}

void Contact::setLastName(std::string& lastName)
{
    this->lastName = lastName;
}

void Contact::setPhoneNumber(std::string& phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string& darkestSecret)
{
    this->darkestSecret = darkestSecret;
}

bool Contact::isEmpty() const
{
    return firstName.empty() || lastName.empty() || nickName.empty() || phoneNumber.empty() || darkestSecret.empty();
}
