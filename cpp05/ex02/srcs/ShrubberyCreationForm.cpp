/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 21:55:07 by marvin            #+#    #+#             */
/*   Updated: 2025/11/27 21:55:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (!isSigned())
        throw AForm::GradeTooLowException();
    if (executor.getGrade() > getGradeToExecute())
        throw AForm::GradeTooLowException();
    std::ofstream file((_target + "_shrubbery").c_str());
    file << "     &&& &&  & &&\n"
        << "  && &\\/&\\|& ()|/ @, &&\n"
        << "  &\\/(/&/&||/& /_/)_&/_&\n"
        << " &() &\\/&|()|/&\\/ '%\" & ()\n"
        << " &_\\_&&_\\ |& |&&/&__%_/_& &&\n"
        << "&&   && & &| &| /& & % ()& /&&\n"
        << " ()&_---()&\\&\\|&&-&&--%---()~\n"
        << "     &&     \\|||\n"
        << "             |||\n"
        << "             |||\n"
        << "             |||\n";
    file.close();
}


