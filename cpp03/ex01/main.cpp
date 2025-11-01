/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:41:28 by marvin            #+#    #+#             */
/*   Updated: 2025/10/30 16:41:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <unistd.h>

int main ()
{
    ClapTrap clappy("Clappy");

    ScavTrap scavy("Scavy");

    std::cout << "\n--- ScavTrap actions ---\n";
    scavy.attack("target1");
    scavy.guardGate();
    scavy.takeDamage(30);
    scavy.beRepaired(20);

    std::cout << "\n--- More attacks to show EP decrement ---\n";
    scavy.attack("target2");
    scavy.attack("target3");

    std::cout << "\n--- End of ScavTrap scope: it will be destroyed now ---\n";

    clappy.attack("switcheroo");
    clappy.takeDamage(5);
    clappy.beRepaired(3);

    return 0;
}