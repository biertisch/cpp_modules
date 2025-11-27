/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:46:36 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/27 14:35:05 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _raw(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(int real) : _raw(real << _fractionalBits)
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(float real) : _raw(roundf(real * (1 << _fractionalBits)))
{
	std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &other)
		_raw = other._raw;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
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
	return _raw >> _fractionalBits;
}

float Fixed::toFloat() const
{
	return static_cast<float>(_raw) / (1 << _fractionalBits);
}

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed)
{
	stream << fixed.toFloat();
	return stream;
}
