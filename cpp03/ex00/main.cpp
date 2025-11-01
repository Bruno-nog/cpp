/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:37:49 by marvin            #+#    #+#             */
/*   Updated: 2025/10/30 14:37:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
    std::cout << "\n";
    ClapTrap trap("Bob");
    std::cout << "\n";
    trap.attack("Obo");
    std::cout << "\n";
    trap.takeDamage(4);
    trap.takeDamage(4);
    std::cout << "\n";
    trap.beRepaired(9);
    std::cout << "\n";
    return (0);
}

