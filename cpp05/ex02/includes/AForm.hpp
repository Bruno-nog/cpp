/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:28:44 by marvin            #+#    #+#             */
/*   Updated: 2025/11/27 17:28:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class AForm
{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeToSign;
        const int _gradeToExec;
    public:
        AForm(const std::string &name, int gradeToSign, int gradeToExec);
        AForm(const AForm &other);
        AForm &operator=(const AForm &other);
        virtual ~AForm();
        const std::string &getName() const;
        bool isSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        void beSigned(const Bureaucrat &b);
        virtual void execute(Bureaucrat const &executor) const = 0;
        class GradeTooHighException : public std::exception
        {
        public:
            virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
        public:
            virtual const char* what() const throw();
        };
};

std::ostream &operator<<(std::ostream &os, const AForm &f);

#endif

