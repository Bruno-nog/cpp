/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 21:56:24 by marvin            #+#    #+#             */
/*   Updated: 2025/11/27 21:56:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::executeAction() const
{
    std::cout << "BZZZZZZZZZ... DRILLING NOISES...\n";

    if (rand() % 2)
        std::cout << _target << " has been robotomized successfully!\n";
    else
        std::cout << "Robotomy failed on " << _target << "...\n";
}
