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
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int main()
{
    try {
        Bureaucrat faraway("faraway", 140);
        Bureaucrat bigboss("big boss", 1);

        ShrubberyCreationForm shrub("japan");
        RobotomyRequestForm robo("chinese");
        PresidentialPardonForm pardon("indian");

        faraway.signForm(shrub);
        faraway.executeForm(shrub);

        bigboss.signForm(shrub);
        bigboss.executeForm(shrub);

        bigboss.signForm(robo);
        bigboss.executeForm(robo);
        
        bigboss.signForm(pardon);
        bigboss.executeForm(pardon);
    }
    catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
