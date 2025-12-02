/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 19:02:08 by brunogue          #+#    #+#             */
/*   Updated: 2025/12/02 15:41:47 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{
	std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
	this->_grade = other._grade;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

Bureaucrat::Bureaucrat(const std::string &name, unsigned int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
	{
		throw (Bureaucrat::GradeTooHighException());
	}
	else if (grade > 150)
	{
		throw (Bureaucrat::GradeTooLowException());
	}
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

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");	
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");	
}

void	Bureaucrat::gradeIncrease(void)
{
	this->_grade--;
	if (this->_grade < 1)
	{
		std::cout << this->_grade << " is too much\n";
		throw (Bureaucrat::GradeTooHighException());
		return ;
	}
	std::cout << "grade increased to: " << this->_grade << " from " << this->_name << std::endl;
}

void	Bureaucrat::gradeDecrease(void)
{
	this->_grade++;
	if (this->_grade > 150)
	{
		throw (Bureaucrat::GradeTooLowException());
		return ;
	}
	std::cout << "grade decreased to: " << this->_grade << " from " << this->_name << std::endl;
}
