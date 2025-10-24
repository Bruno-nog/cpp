/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:19:50 by brunogue          #+#    #+#             */
/*   Updated: 2025/10/24 13:24:09 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie() : name("") 
{
    // não chamar announce() aqui porque o nome está vazio
}

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