/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 22:16:57 by brunogue          #+#    #+#             */
/*   Updated: 2025/12/14 15:37:36 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char** av)
{
	if (ac < 2)
	{
		std::cerr << "not enough numbers" << std::endl;
		return (-1);
	}
	try
	{
		PmergeMe pm;
		pm.processInput(ac, av);
		pm.sortVector();
		pm.sortDeque();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (-1);
	}
	return (0);
}
