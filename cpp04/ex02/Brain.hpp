/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:09:18 by brunogue          #+#    #+#             */
/*   Updated: 2025/11/21 16:27:57 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	protected:
		std::string ideas[100];
	public:
		Brain();
		~Brain();
		Brain(const Brain& copy);
		Brain& operator=(const Brain& Brain);
};

#endif