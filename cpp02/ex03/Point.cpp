/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:40:13 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/20 16:17:48 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x_(Fixed(0)), y_(Fixed(0))
{
	// std::cout << "Point default constructor called\n";
}

Point::Point(const float x, const float y) : x_(Fixed(x)), y_(Fixed(y))
{
	// std::cout << "Point float constructor called\n";
}

Point::Point(const Point& other) : x_(other.x_), y_(other.y_)
{
	// std::cout << "Point copy constructor called\n";
	*this = other;
}

Point&	Point::operator=(const Point& other)
{
	// std::cout << "Point copy assignment operator called\n";
	(void)other;
	return *this;
}

Point::~Point()
{
	// std::cout << "Point destructor called\n";
}

float Point::getX() const
{
	return x_.toFloat();
}

float Point::getY() const
{
	return y_.toFloat();
}
