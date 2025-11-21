/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 19:02:08 by brunogue          #+#    #+#             */
/*   Updated: 2025/11/21 16:32:23 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Default destructor called" << std::endl;
}

std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

unsigned int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}
