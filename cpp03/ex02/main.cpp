/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 19:08:35 by marvin            #+#    #+#             */
/*   Updated: 2025/11/03 19:05:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main ()
{
    std::cout << "=== Creating a standalone ClapTrap ===\n";
    ClapTrap clappy("Clappy");

    std::cout << "\n=== Creating a FragTrap (ClapTrap base constructed first) ===\n";
    {
        FragTrap fraggy("Fraggy");

        std::cout << "\n--- FragTrap special action ---\n";
        fraggy.highFivesGuys();

        std::cout << "\n--- FragTrap actions ---\n";
        fraggy.attack("target1");
        fraggy.takeDamage(40);
        fraggy.beRepaired(25);

        std::cout << "\n--- Extra attacks to show EP decrement ---\n";
        for (int i = 0; i < 6; ++i)
            fraggy.attack("dummy");

        std::cout << "\n--- End of FragTrap scope: it will be destroyed now ---\n";
    }

    std::cout << "\n=== Back in main: only the standalone ClapTrap remains ===\n";
    clappy.attack("stage enemy");
    clappy.takeDamage(5);
    clappy.beRepaired(3);

    std::cout << "\n=== End of main ===\n";
    return 0;
}
