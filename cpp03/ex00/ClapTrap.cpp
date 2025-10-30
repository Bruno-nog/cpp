/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:48:17 by marvin            #+#    #+#             */
/*   Updated: 2025/10/30 14:48:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : Name(name), HitPoints(10),  AttackDamage(0)
{
    std::cout << "ClapTrap constructed: " << Name << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructed: " << Name << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
}


void ClapTrap::takeDamage(unsigned int amount)
{
    HitPoints -= static_cast<int>(amount);
    if (HitPoints < 0) HitPoints = 0;
    std::cout << Name << "takes " << amount << " damage, HP = " << HitPoints << std::endl;
}


void ClapTrap::beRepaired(unsigned int amount)
{
    HitPoints += static_cast<int>(amount);
    if (HitPoints > 10) HitPoints = 10;
    std::cout << Name << " repairs " << amount << " HP, HP = " << HitPoints << std::endl;
}