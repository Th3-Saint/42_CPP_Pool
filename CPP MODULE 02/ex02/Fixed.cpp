/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 08:38:13 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/02 02:42:41 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractional = 8;

Fixed::Fixed()
{
	_raw = 0;
}

Fixed::Fixed(const Fixed& other)
{
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	_raw = other._raw;
	return (*this);
}

int Fixed::getRawBits() const
{
	return (_raw);
}

void Fixed::setRawBits(int const _raw)
{
	this->_raw = _raw;
}

Fixed::Fixed(const int value)
{
	_raw = value << _fractional;
}

Fixed::Fixed(const float value)
{
	_raw = round(value * (1 << _fractional)) ;
}
Fixed::~Fixed()
{
}

int Fixed::toInt( void ) const
{
	return (_raw >> _fractional);
}

float Fixed::toFloat( void ) const
{
	return ((float)_raw / (1 << _fractional));
}

std::ostream& operator<<(std::ostream& os, const Fixed& other)
{
	os << other.toFloat();
	return (os);
}

bool Fixed::operator>(const Fixed& other) const
{
	return (_raw > other._raw);
}

bool Fixed::operator<(const Fixed& other) const
{
	return (_raw < other._raw);
}

bool Fixed::operator>=(const Fixed& other) const
{
	return (_raw >= other._raw);
}

bool Fixed::operator<=(const Fixed& other) const
{
	return (_raw <= other._raw);
}

bool Fixed::operator==(const Fixed& other) const
{
	return (_raw == other._raw);
}

bool Fixed::operator!=(const Fixed& other) const
{
	return (_raw != other._raw);
}

Fixed Fixed::operator*(const Fixed& other) const
{
	Fixed result;
	result._raw = _raw  * other._raw / 256;
	return (result);
}

Fixed Fixed::operator-(const Fixed& other) const
{
	Fixed result;
	result._raw = _raw  - other._raw;
	return (result);
}

Fixed Fixed::operator+(const Fixed& other) const
{
	Fixed result;
	result._raw = _raw + other._raw;
	return (result);
}

Fixed Fixed::operator/(const Fixed& other) const
{
	Fixed result;
	result._raw = _raw / other._raw;
	return (result);
}

Fixed& Fixed::operator++( void )
{
	 this->_raw++;
	 return (*this);
}

Fixed Fixed::operator++( int )
{
	Fixed result(*this);

	 this->_raw++;
	 return (result);
}

Fixed& Fixed::min(Fixed& n1, Fixed& n2)
{
	if (n1 < n2)
		return (n1);
	else
		return (n2);
}

const Fixed& Fixed::min(const Fixed& n1, const Fixed& n2)
{
	if (n1 < n2)
		return (n1);
	else
		return (n2);
}

Fixed& Fixed::max(Fixed& n1, Fixed& n2)
{
	if (n1 > n2)
		return (n1);
	else
		return (n2);
}

const Fixed& Fixed::max(const Fixed& n1, const Fixed& n2)
{
	if (n1 > n2)
		return (n1);
	else
		return (n2);
}

