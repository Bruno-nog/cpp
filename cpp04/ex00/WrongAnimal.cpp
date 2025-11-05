/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 09:20:39 by marvin            #+#    #+#             */
/*   Updated: 2025/11/05 09:20:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("wrong_nao")
{
    std::cout << "WrongAnimal Default Constructor called: " << type << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called: " << type << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong ambient sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}
