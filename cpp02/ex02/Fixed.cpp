/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 19:37:33 by brunogue          #+#    #+#             */
/*   Updated: 2025/10/29 18:20:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::bits = 8;

Fixed::Fixed() : fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPoint = copy.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->fixedPoint = other.getRawBits();
	}
	return *this;
}

std::ostream& operator<<(std::ostream &os, const Fixed &other)
{
	os << other.toFloat();
	return (os);
}

Fixed::Fixed(const int nbInt)
{
	std::cout << "Int constructor called" << std::endl;
	fixedPoint = nbInt << bits;
}
Fixed::Fixed(const float nbFloat)
{
	std::cout << "Float constructor called" << std::endl;
	fixedPoint = roundf(nbFloat * (1 << bits));
}

float Fixed::toFloat(void) const
{
	return ((float)fixedPoint / (1 << bits));
}

int Fixed::toInt(void) const
{
	return (fixedPoint >> bits);
}
