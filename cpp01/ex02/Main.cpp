/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:04:07 by brunogue          #+#    #+#             */
/*   Updated: 2025/10/24 16:40:13 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
	std::string stringBrain = "HI THIS IS BRAIN";

	std::string* stringPTR = &stringBrain;

	std::string& stringREF = *stringPTR;

	std::cout << "\nSTRING ADDRESS: " << &stringBrain << std::endl;
	std::cout << "STRINGPTR ADDRESS: " << stringPTR << std::endl;
	std::cout << "STRINGREF ADDRESS: " << &stringREF << std::endl;
	
	std::cout << "\nSTRING VALUE: " << stringBrain << std::endl;
	std::cout << "STRINGPTR VALUE: " << *stringPTR << std::endl;
	std::cout << "STRINGREF VALUE: " << stringREF << std::endl;

}