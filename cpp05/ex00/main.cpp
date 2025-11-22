/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:48:44 by brunogue          #+#    #+#             */
/*   Updated: 2025/11/22 18:40:48 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	try
	{
		Bureaucrat bureau("big boss", 1);
		bureau.gradeIncrease();
		bureau.gradeIncrease();

	}
	catch(std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << "\n";
	try
	{
		Bureaucrat bureau("naked snake", 2);
		bureau.gradeIncrease();
		bureau.gradeDecrease();
	}
	catch(std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	std::cout << "\n";
	try
	{
		Bureaucrat bureau("venom snake", 150);
		bureau.gradeDecrease();

	}
	catch(std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
