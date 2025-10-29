/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Operator.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:22:05 by marvin            #+#    #+#             */
/*   Updated: 2025/10/29 18:22:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed	Fixed::operator+(const Fixed &Nb) const
{
    return (Fixed(this->toFloat() + Nb.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &Nb) const
{
    return (Fixed(this->toFloat() - Nb.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &Nb) const
{
    return (Fixed(this->toFloat() * Nb.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &Nb) const
{
    return (Fixed(this->toFloat() / Nb.toFloat()));
}


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
		
Fixed&	Fixed::max(Fixed &N1, Fixed &N2)
{
    return ((N1 > N2) ? N1 : N2);
}

const Fixed	Fixed::max(const Fixed &N1, const Fixed &N2)
{
    return ((N1 > N2) ? N1 : N2);
}
		
Fixed&	Fixed::min(Fixed &N1, Fixed &N2)
{
    return ((N1 < N2) ? N1 : N2);
}

const Fixed	Fixed::min(const Fixed &N1, const Fixed &N2)
{
    return ((N1 < N2) ? N1 : N2);
}
