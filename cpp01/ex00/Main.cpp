/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:12:36 by brunogue          #+#    #+#             */
/*   Updated: 2025/10/21 20:16:33 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main ()
{
	Zombie zombie;
	std::string	Name;

	std::cout << "Enter a name to this poor bastard> ";
	std::getline(std::cin, Name);
	zombie.NewZombie(Name);
	// std::cout <<  << std::endl;
}
