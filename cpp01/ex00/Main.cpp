/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:12:36 by brunogue          #+#    #+#             */
/*   Updated: 2025/10/22 19:38:44 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include <cctype>

bool	verify_space(std::string Name)
{
	unsigned long i = 0;
	while (i < Name.length())
	{
		if (!isspace(Name[i]))
		{
			return (true);
		}
		i++;
	}
	return false;
}

int main()
{
	std::string	Name;
	Zombie 		*undead;

	std::cout << "\nEnter a name for this poor bastard > ";
	std::getline(std::cin, Name);
	if (Name.empty())
	{
		std::cout << "eeerrrrrrrrrrooooooooorrrrrrr!\n";
		return (0);
	}
	else if (!verify_space(Name))
	{
		std::cout << "aaaaaaaaarrrrrrrrrrrrrrr\n";
		return (0);
	}
	undead = newZombie(Name);
	undead->announce();
	delete undead;

	std::cout << "\nEnter a name for this poor bastard > ";
	std::getline(std::cin, Name);
	if (Name.empty())
	{
		std::cout << "eeeerrrrrrrrroooorrrrr!!\n";
		return (0);
	}
	randomChump(Name);
	std::cout << std::endl;
	return (0);
}
