/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 19:35:18 by brunogue          #+#    #+#             */
/*   Updated: 2025/11/04 19:47:59 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("nao")
{
	std::cout << "Default Constructor called: " << type << std::endl;
}

Animal::~Animal()
{
	std::cout << "Destructor called: " << type << std::endl;
}

std::string Animal::getType()
{
	return (this->type);
}

