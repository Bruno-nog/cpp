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
#include <ctime>
#include <stdlib.h>

int main()
{
    std::srand(std::time(NULL));
    try {
        Bureaucrat bigboss("big boss", 1);
        Bureaucrat agent("agent", 140);

        ShrubberyCreationForm shrub("japan");
        RobotomyRequestForm robo("chinese");
        PresidentialPardonForm pardon("korean");

        agent.signForm(shrub);
        agent.executeForm(shrub);

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
