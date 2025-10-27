/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:51:42 by brunogue          #+#    #+#             */
/*   Updated: 2025/10/27 16:11:18 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"


int main (int ac, char **av)
{
	Harl harl;
	if (ac != 2)
	{
		std::cerr << "Usage: ./harl <LEVEL>\n";
		std::cerr << "LEVEL: INFO, WARNING, ERROR, DEBUG" << std::endl;
		return 1;	
	}
	std::string level = av[1];
	harl.complain(level);
	return (0);
}
