/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 17:31:26 by brunogue          #+#    #+#             */
/*   Updated: 2025/11/22 17:34:40 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

class Form
{
	private:
		const std::string _name;
		bool _sign;
		const int _signGrade;
		const int _execGrade;
	public:
		Form();
		~Form();
}

#endif