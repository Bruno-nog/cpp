/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 20:23:36 by brunogue          #+#    #+#             */
/*   Updated: 2025/10/21 20:28:34 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string Name)
{
	this->Name = Name;
}

Zombie::~Zombie()
{
	std::cout << "Zombie   was killed" << std::endl;
}