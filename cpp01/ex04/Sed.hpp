/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:34:58 by brunogue          #+#    #+#             */
/*   Updated: 2025/10/27 18:07:57 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <string>
#include <iostream>

class Sed
{
	private:
		std::string filename;


	public:
		Sed(std::string file);
		~Sed();
		std::string getFileName();
};

#endif