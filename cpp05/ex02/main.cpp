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

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try {
        Bureaucrat bob("Bob", 140);
        Bureaucrat alice("Alice", 1);

        ShrubberyCreationForm shrub("home");
        RobotomyRequestForm robo("Marvin");
        PresidentialPardonForm pardon("Arthur Dent");

        bob.signForm(shrub);
        bob.executeForm(shrub); // vai falhar

        alice.signForm(shrub);
        alice.executeForm(shrub); // cria arquivo

        alice.signForm(robo);
        alice.executeForm(robo);

        alice.signForm(pardon);
        alice.executeForm(pardon);
    }
    catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
