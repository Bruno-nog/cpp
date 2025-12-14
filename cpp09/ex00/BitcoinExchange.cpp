/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 16:11:20 by brunogue          #+#    #+#             */
/*   Updated: 2025/12/13 21:47:45 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) : _data(other._data)
{}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
		this->_data = other._data;
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

bool BitcoinExchange::isValidValue(const std::string &value) const
{
    char *end;
    errno = 0;
    double val = std::strtod(value.c_str(), &end);

    if (*end != '\0')
    {
        std::cout << "Error: bad input => " << value << std::endl;
        return false;
    }
    if (errno == ERANGE || val > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return false;
    }
    if (val < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return false;
    }
    return true;
}


bool BitcoinExchange::isValidKey(const std::string &key) const
{
	if (key.size() != 10 || key[4] != '-' || key[7] != '-')
		return false;
	int year = std::atoi(key.substr(0, 4).c_str());
	int month = std::atoi(key.substr(5, 2).c_str());
	int day = std::atoi(key.substr(8, 2).c_str());

	if (year < 2009 || month < 1 || month > 12 || day < 1 || day > 31)
		return false;
	return true;
}


void BitcoinExchange::processInputFile(const std::string &filename) const
{
	std::ifstream file(filename.c_str());
	if (!file.is_open())
		throw (std::runtime_error("Couldn't open input file"));

	std::string line;
	std::getline(file, line);

	while (std::getline(file, line))
	{
		if (line.empty())
			continue;

		std::stringstream ss(line);
		std::string key, valueStr;
		if (!std::getline(ss, key, '|') || !std::getline(ss, valueStr)) {
				std::cout << "Error: bad input => " << line << std::endl;
				continue;
		}

		if (!key.empty() && key[key.size() - 1] == ' ')
			key.erase(key.size() - 1);
		if (!valueStr.empty() && valueStr[0] == ' ')
			valueStr.erase(0, 1);
		if (!isValidKey(key)) {
			continue;
		}
		if (!isValidValue(valueStr)) {
			continue;
		}

		double value = std::atof(valueStr.c_str());

		std::map<std::string, double>::const_iterator it = this->_data.lower_bound(key);
		if (it == this->_data.end())
			--it;

		else if (it->first != key) {
			if (it == _data.begin()) {
				std::cout << "No early date available for " << key << std::endl;
				continue;
			}
			--it;
		}
		
		// std::cout << "it->first: " << it->first << std::endl;
		// std::cout << "Value: " << value << std::endl;
		// std::cout << "it->second: " << it->second << std::endl;
		double result = value * it->second;
		// std::cout << "result: " << result << std::endl;
		std::cout << key << " => " << value << " = " << result << std::endl;
	}
}


void BitcoinExchange::loadDataBase(const std::string &filename)
{
	std::ifstream file(filename.c_str());
	if (!file.is_open())
		throw(std::runtime_error("Couldn't open database file"));

	std::string line;
	std::getline(file, line);

	while (std::getline(file, line))
	{
		std::stringstream ss(line);
		std::string key;
		std::string value;
		if (!std::getline(ss, key, ',') || !std::getline(ss, value))
			continue;

		double price = std::atof(value.c_str());
		_data[key] = price;
	}
}