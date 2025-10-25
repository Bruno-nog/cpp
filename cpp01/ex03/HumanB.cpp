/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:57:57 by brunogue          #+#    #+#             */
/*   Updated: 2025/10/25 18:45:17 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {}

HumanB::~HumanB(void) {}

void	HumanB::attack(void)
{
	if (type)
	{
		std::cout << "\n" << name << " attacked with his " << type->getType() << std::endl;
	}
	else
	{
		std::cout << "\n" << name << " does not have a weapon" << std::endl;
	}
}

void	HumanB::setWeapon(Weapon* NewType)
{
	this->type = NewType;
}
