/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 19:01:12 by brunogue          #+#    #+#             */
/*   Updated: 2025/11/21 18:06:19 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
	private:
		const std::string _name;
		unsigned int _grade;
	public:
		Bureaucrat();
		std::string getName(void) const;
		unsigned int getGrade(void) const;
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		}
		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		}
		~Bureaucrat();
};

#endif