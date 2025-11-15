/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:30:38 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/15 12:02:47 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point
{
	private:
		const Fixed	_x;
		const Fixed _y;

	public:
		Point();
		Point(const float x, const float y);
		Point(const Point& other);
		Point&	operator=(const Point& other);
		~Point();
		float	getX() const;
		float	getY() const;
};

#endif