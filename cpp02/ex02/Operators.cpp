/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operators.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:22:05 by marvin            #+#    #+#             */
/*   Updated: 2025/11/01 16:57:55 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed	Fixed::operator+(const Fixed &Nb) const
{
    Fixed res;

    res.setRawBits(this->fixedPoint + Nb.fixedPoint);
    return res;
}

Fixed	Fixed::operator-(const Fixed &Nb) const
{
    Fixed res;

    res.setRawBits(this->fixedPoint - Nb.fixedPoint);
    return res;
}

Fixed	Fixed::operator*(const Fixed &Nb) const
{
    Fixed res;
    long long temp = static_cast<long long>(this->fixedPoint) * static_cast<long long>(Nb.fixedPoint);
    temp = temp >> bits;
    res.setRawBits(static_cast<int>(temp));
    return res;
}

Fixed	Fixed::operator/(const Fixed &Nb) const
{
    Fixed res;
    long long temp = static_cast<long long>(this->fixedPoint) / static_cast<long long>(Nb.fixedPoint);
    temp = temp >> bits;
    res.setRawBits(static_cast<int>(temp));
    return res;}


bool	Fixed::operator<(const Fixed &Nb) const
{
    return (fixedPoint < Nb.fixedPoint);
}

bool	Fixed::operator>(const Fixed &Nb) const
{
    return (fixedPoint > Nb.fixedPoint);
}

bool	Fixed::operator<=(const Fixed &Nb) const
{
    return (fixedPoint <= Nb.fixedPoint);
}

bool	Fixed::operator>=(const Fixed &Nb) const
{
    return (fixedPoint >= Nb.fixedPoint);
}

bool	Fixed::operator==(const Fixed &Nb) const
{
    return (fixedPoint == Nb.fixedPoint);
}

bool	Fixed::operator!=(const Fixed &Nb) const
{
    return (fixedPoint != Nb.fixedPoint);
}


Fixed&	Fixed::operator++()
{
    fixedPoint += 1;
    return (*this);
}
Fixed	Fixed::operator++(int)
{
    Fixed temp = *this;
    fixedPoint += 1;
    return (temp);
}

Fixed&	Fixed::operator--()
{
    --fixedPoint;
    return (*this);
}

Fixed	Fixed::operator--(int)
{
    Fixed temp = *this;
    fixedPoint--;
    return (temp);
}


Fixed&	Fixed::max(Fixed &N1, Fixed &N2)
{
    return ((N1 > N2) ? N1 : N2);
}

const Fixed& Fixed::max(const Fixed &N1, const Fixed &N2)
{
    return ((N1 > N2) ? N1 : N2);
}
		
Fixed&	Fixed::min(Fixed &N1, Fixed &N2)
{
    return ((N1 < N2) ? N1 : N2);
}

const Fixed& Fixed::min(const Fixed &N1, const Fixed &N2)
{
    return ((N1 < N2) ? N1 : N2);
}
