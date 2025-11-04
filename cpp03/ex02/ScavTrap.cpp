/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:54:45 by marvin            #+#    #+#             */
/*   Updated: 2025/11/04 13:32:45 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    MaxHitPoints = 100;
    std::cout << "ScavTrap constructed: " << Name << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructed: " << Name << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (HitPoints <= 0)
    {
        std::cout << "ScavTrap " << Name << " has no hit points and cannot attack" << std::endl;
        return ;
    }
    if (EnergyPoints <= 0)
    {
        std::cout << "ScavTrap " << Name << " has no energy points and cannot attack" << std::endl;
        return ; 
    }
    --EnergyPoints;
    std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << Name << " is now in Gate keeper mode." << std::endl;
}