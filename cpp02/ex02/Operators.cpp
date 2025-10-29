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

Fixed	operator-(const Fixed &Nb) const
{
    return (Fixed(this->toFloat() - Nb.toFloat()));
}

Fixed	operator*(const Fixed &Nb) const;
{
    return (Fixed(this->toFloat() * Nb.toFloat()));
}

Fixed	operator/(const Fixed &Nb) const
{
    return (Fixed(this->toFloat() / Nb.toFloat()));
}


