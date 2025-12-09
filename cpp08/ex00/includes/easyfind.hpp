/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 17:22:25 by brunogue          #+#    #+#             */
/*   Updated: 2025/12/09 18:53:12 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

class NotFoundException : public std::exception
{
	public:
		virtual const char* what() const throw();
		{
			return ("easyfind: value not found");
		}
};

#include "easyfind.tpp";

#endif