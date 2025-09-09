/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 19:23:30 by brunogue          #+#    #+#             */
/*   Updated: 2025/09/09 17:45:03 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){}

Contact::Contact(const std::string& firstName, const std::string& lastName,
                const std::string& nickName, const std::string& phoneNumber, const std::string& darkestSecret)
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

void Contact::setFirstName(const std::string& firstName)
{
    this->firstName = firstName;
}

void Contact::setNickName(const std::string& nickName)
{
    this->nickName = nickName;
}

void Contact::setLastName(const std::string& lastName)
{
    this->lastName = lastName;
}

void Contact::setPhoneNumber(const std::string& phoneNumber)
{
    this->phoneNumber = phoneNumber;
}


bool Contact::isEmpty() const
{
    return firstName.empty() || lastName.empty() || nickName.empty() || phoneNumber.empty() || darkestSecret.empty();
}