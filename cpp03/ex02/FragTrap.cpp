/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 19:10:48 by marvin            #+#    #+#             */
/*   Updated: 2025/11/04 14:22:19 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Unnamed")
{
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    MaxHitPoints = 100;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructed: " << Name << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    MaxHitPoints = 100;
    std::cout << "Parametric constructor called " << Name << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    *this = copy;
    std::cout << "FragTrap copied: " << Name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        HitPoints = other.HitPoints;
        EnergyPoints = other.EnergyPoints;
        AttackDamage = other.AttackDamage;
        MaxHitPoints = other.MaxHitPoints;
    }
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    if (HitPoints <= 0)
    {
        std::cout << Name << " is dead, cannot do a High Five" << std::endl;
    } else
    {
        std::cout << Name << " Do a HighFive" << std::endl;
    }
}
