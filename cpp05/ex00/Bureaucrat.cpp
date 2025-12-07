/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 19:02:08 by brunogue          #+#    #+#             */
/*   Updated: 2025/12/05 16:30:37 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
    std::cout << *this << " constructed (default)" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{
    std::cout << other << " copy constructed" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
    {
        this->_grade = other._grade;
    }
    std::cout << *this << " copy assigned from " << other << std::endl;
    return *this;
}

Bureaucrat::Bureaucrat(const std::string &name, unsigned int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << *this << " constructed" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << *this << " destroyed" << std::endl;
}

std::string Bureaucrat::getName(void) const
{
    return this->_name;
}

unsigned int Bureaucrat::getGrade(void) const
{
    return this->_grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}

void Bureaucrat::gradeIncrease(void)
{
    if (this->_grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    --this->_grade;
    std::cout << *this << " grade increased to: " << this->_grade << std::endl;
}

void Bureaucrat::gradeDecrease(void)
{
    if (this->_grade >= 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    ++this->_grade;
    std::cout << *this << " grade decreased to: " << this->_grade << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade();
    return os;
}
