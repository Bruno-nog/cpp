/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 19:08:35 by marvin            #+#    #+#             */
/*   Updated: 2025/11/04 16:15:19 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main ()
{
    ClapTrap clappy("Clappy");
    FragTrap fraggy("Fraggy");

    std::cout << "\n--- FragTrap special action ---\n";
    fraggy.highFivesGuys();

    std::cout << "\n--- FragTrap actions ---\n";
    fraggy.attack("target1");
    fraggy.takeDamage(40);
    fraggy.beRepaired(25);

    std::cout << "\n--- Extra attacks to show EP decrement ---\n";
    for (int i = 0; i < 6; ++i)
        fraggy.attack("froggy");

    std::cout << "\n--- End of FragTrap scope: it will be destroyed now ---\n";

    std::cout << "\n=== Only the standalone ClapTrap remains ===\n";
    clappy.attack("stage enemy");
    clappy.takeDamage(5);
    clappy.beRepaired(3);

    std::cout << "\n=== End of main ===\n";
    return 0;
}
