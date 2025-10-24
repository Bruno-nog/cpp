/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:19:50 by brunogue          #+#    #+#             */
/*   Updated: 2025/10/24 13:42:47 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie() : name("") {}

Zombie::Zombie(std::string name)
    : name(name)
{
    announce();
}

Zombie::~Zombie()
{
    std::cout << "Zombie: {" << name << "} was killed" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::SetName(const std::string& NewName)
{
    this->name = NewName;
}