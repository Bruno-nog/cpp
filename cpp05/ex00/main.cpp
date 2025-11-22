/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:48:44 by brunogue          #+#    #+#             */
/*   Updated: 2025/11/22 14:25:03 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	try
	{
		Bureaucrat bureau("aas", 151);
	}
	catch(std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
