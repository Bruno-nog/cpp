/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 20:01:27 by brunogue          #+#    #+#             */
/*   Updated: 2025/11/04 20:09:28 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << this->getType() << " Constructor called: " << this->type << std::endl;
}

Cat::~Cat()
{
	std::cout << this->getType() << " Destructor called: " << this->type << std::endl;
}
