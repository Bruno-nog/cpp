/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 20:23:36 by brunogue          #+#    #+#             */
/*   Updated: 2025/10/23 19:18:15 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string Name)
{
	this->Name = Name;
}

Zombie::~Zombie()
{
	std::cout << "Zombie: " << "{" << Name << "}" << " was killed\n" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "\n" << Name << ": BraiiiiiiinnnzzzZ...\n" << std::endl;
}
