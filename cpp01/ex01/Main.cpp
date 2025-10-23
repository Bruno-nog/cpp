/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:49:06 by brunogue          #+#    #+#             */
/*   Updated: 2025/10/23 20:04:52 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include "Zombie.hpp"

int main()
{
	int			Horde = 0;
	std::string	Command;
	Zombie 		*ArmyZombie;
	
	while (1)
	{
		std::cout << "Enter a number of how many Zombies you want > ";
		std::getline(std::cin, Command);
		if (Command.empty())
		{
			std::cout << "Please enter a number" << std::endl;
			continue ;
		}
		std::stringstream(Command) >> Horde;
		if (Horde > 10000)
		{
			std::cout << "Number too large." << std::endl;
			continue ;
		}
		else if (Horde <= 0)
		{
			std::cout << "It has to be more than 0." << std::endl;
			continue ;
		}
		for (int i = 0; i < Horde; ++i)
			ArmyZombie[i].announce();
		ArmyZombie = zombieHorde(Horde, Command);
		delete[] ArmyZombie;
		
	}
}
