/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 13:06:27 by brunogue          #+#    #+#             */
/*   Updated: 2025/12/03 18:46:41 by brunogue         ###   ########.fr       */
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

AForm *Intern::makeForm(const std::string &name, const std::string &target) const
{
    struct FormMap {
        std::string formName;
        AForm *(*creator)(const std::string &);
    };

    FormMap forms[] = {
        {"shrubbery creation",  createShrub},
        {"robotomy request",    createRobot},
        {"presidential pardon", createPardon}
    };

    for (int i = 0; i < 3; i++) {
        if (forms[i].formName == name) {
            std::cout << "Intern creates " << name << std::endl;
            return forms[i].creator(target);
        }
    }

    std::cout << "Intern couldn't create " << name << " because it doesn't exist" << std::endl;
    return NULL;
}