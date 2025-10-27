/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:46:56 by brunogue          #+#    #+#             */
/*   Updated: 2025/10/27 16:07:01 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
	private:
		void warning(void);
		void info(void);
		void debug(void);
		void error(void);
	public:
		Harl();
		~Harl();
		void complain(std::string level);
};


#endif