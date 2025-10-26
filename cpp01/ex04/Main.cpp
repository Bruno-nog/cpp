/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 18:52:07 by brunogue          #+#    #+#             */
/*   Updated: 2025/10/26 17:47:24 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <fcntl.h>


int main(int ac, char **av)
{
	const char* filename = av[1];
	int fd;

	if (ac > 4)
	{
		std::cout << "Many arguments" << std::endl;
	} else if (ac <= 3)
	{
		std::cout << "Few arguments" << std::endl;
	}

	try
	{
		fd = open(filename, O_WRONLY);
	}
	catch (!fd)
	{
		std::cout << "algo de errado nao esta certo\n";
		return (0);
	}
}
