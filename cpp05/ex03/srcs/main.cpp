/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 22:12:23 by marvin            #+#    #+#             */
/*   Updated: 2025/11/26 22:12:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Intern.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
    std::srand(std::time(NULL));
    Intern someIntern;
    // Bureaucrat bob("iss", 1);

    std::cout << "== Create valid form (robotomy request) ==\n";
    AForm* f1 = someIntern.makeForm("robotomy request", "Bender");
    if (f1)
    {
        std::cout << "Created form: " << f1->getName() << "\n";
        delete f1;
    }
    else
    {
        std::cout << "Factory returned NULL for robotomy request\n";
    }

    std::cout << "\n== Create invalid form ==\n";
    AForm* bad = someIntern.makeForm("not a form", "none");
    if (!bad)
        std::cout << "As expected, creation failed for unknown form\n";

    std::cout << "\n== Create all known forms ==\n";
    AForm* s = someIntern.makeForm("shrubbery creation", "home");
    AForm* r = someIntern.makeForm("robotomy request", "robot");
    AForm* p = someIntern.makeForm("presidential pardon", "someone");
    // bob.signForm(*s);
    // bob.executeForm(*s);
    if (s) delete s;
    if (r) delete r;
    if (p) delete p;

    return 0;
}

