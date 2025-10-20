/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:39:12 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/20 16:41:06 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"

int main()
{
	Point a(1.0f, 1.0f);
	Point b(2.0f, -2.0f);
	Point c(4.0f, 0.0f);
	std::cout << "Triangle A=(1.0, 1.0) B=(2.0, -2.0) C=(4.0, 0.0)\n";

	Point p1(2.5f, -0.5f);
	std::cout << std::boolalpha;
	std::cout << "Point (2.0, 0.0) is inside the triangle: " << bsp(a, b, c, p1) << "\n";

	Point p2(3.5f, 1.5f);
	std::cout << "Point (3.5, 1.5) is inside the triangle: " << bsp(a, b, c, p2) << "\n";

	Point p3(2.0f, -2.0f);
	std::cout << "Point (2.0, -2.0) is inside the triangle: " << bsp(a, b, c, p3) << "\n";

	Point d(-2.0f, 0.5f);
	Point e(-0.25f, 4.0f);
	Point f(0.75f, -1.0f);
	std::cout << "Triangle D=(-2.0, 0.5) E=(-0.25, 4.0) F=(0.75, -1.0)\n";

	Point p4(-0.75f, 2.0f);
	std::cout << "Point (-0.75, 2.0) is inside the triangle: " << bsp(d, e, f, p4) << "\n";

	Point p5(0.5f, 0.25f);
	std::cout << "Point (0.5, 0.25) is inside the triangle: " << bsp(d, e, f, p5) << "\n";

	Point p6(0.0f, -0.6f);
	std::cout << "Point (0.0, -0.25) is inside the triangle: " << bsp(d, e, f, p6) << "\n";

	return 0;
}
