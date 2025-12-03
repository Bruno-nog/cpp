/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 13:06:27 by brunogue          #+#    #+#             */
/*   Updated: 2025/12/03 18:16:59 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &other) { (void)other; }

Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    return (*this);
}

Intern::~Intern() {}

static AForm *createShrub(std::string const &target)
{
	return new ShrubberyCreationForm(target);
}

static AForm *createRobot(std::string const &target)
{
	return new RobotomyRequestForm(target);
}

static AForm *createPardon(std::string const &target)
{
	return new PresidentialPardonForm(target);
}

typedef AForm *(*FormCreator)(const std::string &target);

AForm *Intern::makeForm(const std::string &name, const std::string &target) const
{
	const std::string names[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	FormCreator creators[] = {
		&createShrub,
		&createRobot,
		&createPardon
	};
	const int count = 3;
	for (int i = 0; i < count; ++i) {
		if (names[i] == name) {
			AForm *form = creators[i](target);
			std::cout << "Intern creates " << name << std::endl;
			return form;
		}
	}
	std::cout << "Intern couldn't create " << name << " because it doesn't exist" << std::endl;
	return NULL;
}