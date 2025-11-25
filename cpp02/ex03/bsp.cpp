/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:51:16 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/25 14:46:52 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

static float crossProduct(Point const& point, Point const& vertex1, Point const& vertex2)
{
	return (point.getX() - vertex1.getX()) * (vertex2.getY() - vertex1.getY())
		- (point.getY() - vertex1.getY()) * (vertex2.getX() - vertex1.getX());
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float crossAB = crossProduct(point, a, b);
	float crossBC = crossProduct(point, b, c);
	float crossCA = crossProduct(point, c, a);

	return (crossAB < 0 && crossBC < 0 && crossCA < 0)
		|| (crossAB > 0 && crossBC > 0 && crossCA > 0);
}
