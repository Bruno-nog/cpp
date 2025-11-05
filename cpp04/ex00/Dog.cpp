/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 20:09:51 by brunogue          #+#    #+#             */
/*   Updated: 2025/11/04 23:45:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << " Constructor called: " << this->type << std::endl;
}

Dog::~Dog()
{
	std::cout << " Destructor called: " << this->type << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}