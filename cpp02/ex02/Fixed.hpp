/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 19:35:32 by brunogue          #+#    #+#             */
/*   Updated: 2025/10/29 20:52:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int fixedPoint;
		static const int bits;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int nbInt);
		Fixed(const float nbFloat);
		Fixed &operator=(const Fixed &other);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		
		Fixed	operator+(const Fixed &Nb) const;
		Fixed	operator-(const Fixed &Nb) const;
		Fixed	operator*(const Fixed &Nb) const;
		Fixed	operator/(const Fixed &Nb) const;

		bool	operator<(const Fixed &Nb) const;
		bool	operator>(const Fixed &Nb) const;
		bool	operator<=(const Fixed &Nb) const;
		bool	operator>=(const Fixed &Nb) const;
		bool	operator==(const Fixed &Nb) const;
		bool	operator!=(const Fixed &Nb) const;
		
		Fixed	&operator++(); //++i
		Fixed	operator++(int); //i++
		Fixed	&operator--(); //--i
		Fixed	operator--(int); //i--
		
		static Fixed	&max(Fixed &N1, Fixed &N2);
		static const Fixed	max(const Fixed &N1, const Fixed &N2);
		
		static Fixed	&min(Fixed &N1, Fixed &N2);
		static const Fixed	min(const Fixed &N1, const Fixed &N2);

		float toFloat(void) const;
		int toInt(void) const;
		
};
std::ostream& operator<<(std::ostream &os, const Fixed &other);

#endif
