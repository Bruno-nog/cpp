/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 13:59:34 by brunogue          #+#    #+#             */
/*   Updated: 2025/08/25 19:10:30 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void print_in_uppercase(char *input, int i)
{
	if (!input)
		return ;
	if ((!i) > 0)
		std::cout << " ";
	int j = 0;
	while (input[j] != '\0')
	{
		std::cout << (char)toupper(input[j]);
		j++;
	}
}

int main (int ac, char **av)
{
	int i = 0;
	
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		while (++i < ac)
			print_in_uppercase(av[i], i);
		std::cout << std::endl;
	}
	return (0);
}