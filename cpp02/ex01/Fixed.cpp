/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:46:36 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/15 16:05:17 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : raw_(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(int real) : raw_(real << fractionalBits_)
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(float real) : raw_(roundf(real * (1 << fractionalBits_)))
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
		raw_ = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const
{
	return raw_;
}

void Fixed::setRawBits(int const raw)
{
	raw_ = raw;
}

int Fixed::toInt() const
{
	return roundf(toFloat());
}

float Fixed::toFloat() const
{
	return raw_ / (float)(1 << fractionalBits_);
}

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed)
{
	stream << fixed.toFloat();
	return stream;
}
