/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 16:47:56 by brunogue          #+#    #+#             */
/*   Updated: 2025/10/25 18:43:50 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type) : type(type), name(name) {}

HumanA::~HumanA() {}

void	HumanA::attack(void)
{
	std::cout << "\n" << name << " attacked with his " << type.getType() << std::endl;
}