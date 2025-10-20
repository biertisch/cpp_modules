/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:46:36 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/20 15:36:48 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : raw_(0)
{
	// std::cout << "Fixed default constructor called\n";
}

Fixed::Fixed(int real) : raw_(real << fractionalBits_)
{
	// std::cout << "Fixed int constructor called\n";
}

Fixed::Fixed(float real) : raw_(roundf(real * (1 << fractionalBits_)))
{
	// std::cout << "Fixed float constructor called\n";
}

Fixed::Fixed(const Fixed& other)
{
	// std::cout << "Fixed copy constructor called\n";
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	// std::cout << "Fixed copy assignment operator called\n";
	if (this != &other)
		raw_ = other.raw_;
	return *this;
}

Fixed::~Fixed()
{
	// std::cout << "Fixed destructor called\n";
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

bool Fixed::operator<(const Fixed& other) const
{
	return raw_ < other.raw_;
}

bool Fixed::operator>(const Fixed& other) const
{
	return raw_ > other.raw_;
}

bool Fixed::operator<=(const Fixed& other) const
{
	return raw_ <= other.raw_;
}

bool Fixed::operator>=(const Fixed& other) const
{
	return raw_ >= other.raw_;
}

bool Fixed::operator==(const Fixed& other) const
{
	return raw_ == other.raw_;
}

bool Fixed::operator!=(const Fixed& other) const
{
	return raw_ != other.raw_;
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
	raw_++;
	return *this;
}

Fixed Fixed::operator++(int dummy)
{
	(void)dummy;

	Fixed copy(*this);
	raw_++;
	return copy;
}

Fixed& Fixed::operator--()
{
	raw_--;
	return *this;
}

Fixed Fixed::operator--(int dummy)
{
	(void)dummy;

	Fixed copy(*this);
	raw_--;
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
