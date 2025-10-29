/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 19:37:33 by brunogue          #+#    #+#             */
/*   Updated: 2025/10/29 18:38:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::bits = 8;

Fixed::Fixed() : fixedPoint(0) {}

Fixed::Fixed(const Fixed &copy)
{
	this->fixedPoint = copy.getRawBits();
}

Fixed::~Fixed() {}

int Fixed::getRawBits(void) const
{
	return (this->fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
}

Fixed &Fixed::operator=(const Fixed &other)
{
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
	fixedPoint = nbInt << bits;
}
Fixed::Fixed(const float nbFloat)
{
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
