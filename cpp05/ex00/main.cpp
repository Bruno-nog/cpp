/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:48:44 by brunogue          #+#    #+#             */
/*   Updated: 2025/12/02 16:10:02 by brunogue         ###   ########.fr       */
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
		Bureaucrat bureau("second option", 2);
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
		Bureaucrat bureau("ordinary people", 150);
		bureau.gradeDecrease();
	}
	catch(std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
