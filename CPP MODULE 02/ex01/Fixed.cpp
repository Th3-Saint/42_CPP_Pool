/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 08:38:13 by mrobaii           #+#    #+#             */
/*   Updated: 2023/03/01 05:44:14 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractional = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	_raw = 0;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called\n";
	_raw = other._raw;
	return (*this);
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return (_raw);
}

void Fixed::setRawBits(int const _raw)
{
	std::cout << "setRawBits member function called\n";
	this->_raw = _raw;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called\n";
	_raw = value << _fractional;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called\n";
	_raw = round(value * (1 << _fractional)) ;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
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
