/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:46:36 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/15 12:01:55 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _raw(0)
{
	// std::cout << "Default constructor called\n";
}

Fixed::Fixed(int real) : _raw(real << _fractionalBits)
{
	// std::cout << "Int constructor called\n";
}

Fixed::Fixed(float real) : _raw(roundf(real * (1 << _fractionalBits)))
{
	// std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed& other)
{
	// std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	// std::cout << "Copy assignment operator called\n";
	if (this != &other)
		_raw = other._raw;
	return *this;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const
{
	return _raw;
}

void Fixed::setRawBits(int const raw)
{
	_raw = raw;
}

int Fixed::toInt() const
{
	return roundf(toFloat());
}

float Fixed::toFloat() const
{
	return _raw / (float)(1 << _fractionalBits);
}

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed)
{
	stream << fixed.toFloat();
	return stream;
}

bool Fixed::operator<(const Fixed& other) const
{
	return _raw < other._raw;
}

bool Fixed::operator>(const Fixed& other) const
{
	return _raw > other._raw;
}

bool Fixed::operator<=(const Fixed& other) const
{
	return _raw <= other._raw;
}

bool Fixed::operator>=(const Fixed& other) const
{
	return _raw >= other._raw;
}

bool Fixed::operator==(const Fixed& other) const
{
	return _raw == other._raw;
}

bool Fixed::operator!=(const Fixed& other) const
{
	return _raw != other._raw;
}

Fixed Fixed::operator+(const Fixed& other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed& Fixed::operator++()
{
	_raw++;
	return *this;
}

Fixed Fixed::operator++(int dummy)
{
	(void)dummy;

	Fixed copy(*this);
	_raw++;
	return copy;
}

Fixed& Fixed::operator--()
{
	_raw--;
	return *this;
}

Fixed Fixed::operator--(int dummy)
{
	(void)dummy;

	Fixed copy(*this);
	_raw--;
	return copy;
}

const Fixed& Fixed::min(const Fixed& first, const Fixed& second)
{
	if (first < second)
		return first;
	return second;
}
Fixed& Fixed::min(Fixed& first, Fixed& second)
{
	if (first < second)
		return first;
	return second;
}
const Fixed& Fixed::max(const Fixed& first, const Fixed& second)
{
	if (first > second)
		return first;
	return second;
}
Fixed&	Fixed::max(Fixed& first, Fixed& second)
{
	if (first > second)
		return first;
	return second;
}
