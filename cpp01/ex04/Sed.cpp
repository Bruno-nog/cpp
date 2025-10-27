/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:37:02 by brunogue          #+#    #+#             */
/*   Updated: 2025/10/27 18:09:46 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string file) : filename(file) {}

Sed::~Sed() {}

std::string Sed::getFileName()
{
	return this->filename;
}
