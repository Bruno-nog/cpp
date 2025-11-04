/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 20:09:51 by brunogue          #+#    #+#             */
/*   Updated: 2025/11/04 20:12:48 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << this->getType() << " Constructor called: " << this->type << std::endl;
}

Dog::~Dog()
{
	std::cout << this->getType() << " Destructor called: " << this->type << std::endl;
}
