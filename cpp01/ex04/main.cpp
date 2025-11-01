/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 18:52:07 by brunogue          #+#    #+#             */
/*   Updated: 2025/10/27 18:03:49 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include "Sed.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: ./sed <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	Sed sed(av[1]);
	std::string s1 = av[2];
	std::string s2 = av[3];

	std::ifstream infile(sed.getFileName().c_str(), std::ios::binary);
	if (!infile)
	{
		std::cerr << "Error: cannot open input file " << sed.getFileName() << std::endl;
		return (1);
	} else
	{
		std::string content;
		{
			std::ostringstream ss;
			ss << infile.rdbuf();
			content = ss.str();
		}
		infile.close();
		std::string res;
		size_t pos = 0;
		size_t found;
		while ((found = content.find(s1, pos)) != std::string::npos)
		{
			res.append(content, pos, found - pos);
			res.append(s2);
			pos = found + s1.length();
		}
		res.append(content, pos, content.size() - pos);

		std::string outname = sed.getFileName() + ".replace";
		std::ofstream outfile(outname.c_str(), std::ios::binary);
		if (!outfile)
		{
			std::cerr << "Error: cannot create output file." << std::endl;
			return (1);
		}
		outfile << res;
		outfile.close();
	}
	return (0);
}
