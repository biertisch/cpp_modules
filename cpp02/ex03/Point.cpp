/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:40:13 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/25 19:47:03 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
	// std::cout << "Point default constructor called\n";
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
	// std::cout << "Point float constructor called\n";
}

Point::Point(const Point& other) : _x(other._x), _y(other._y)
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
	return _x.toFloat();
}

float Point::getY() const
{
	return _y.toFloat();
}
