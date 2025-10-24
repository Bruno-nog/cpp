/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:49:06 by brunogue          #+#    #+#             */
/*   Updated: 2025/10/24 13:51:00 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include "Zombie.hpp"
#include <unistd.h>
#include <stdio.h>

int main()
{
	int			Horde = 0;
	std::string	Command;
	Zombie 		*ArmyZombie;
	
	while (1)
	{
		if (feof(stdin)) break;
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
		while (1)
		{
			std::cout << "Enter a name of how this Zombies will be called > ";
			std::getline(std::cin, Command);
			if (Command.empty())
			{
				std::cout << "Please enter a name" << std::endl;
				continue ;
			}
			else
				break ;
		}
		sleep(1);
		std::cout << "...\n";
		sleep(2);
		std::cout << "\nloading...\n\n";
		sleep(2);
		ArmyZombie = zombieHorde(Horde, Command);
		std::cout << "\n";
		for (int i = 0; i < Horde; ++i)
			ArmyZombie[i].announce();
		std::cout << "\n";
		delete[] ArmyZombie;
		std::cout << "\n";
		break ;
	}
}
