/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:54:33 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/24 14:23:43 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <limits>
#include <string>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
	std::cout << "Enter the number of zombies in the horde: " << std::flush;
	int n;
	while (!(std::cin >> n))
	{
		if (std::cin.eof())
		{
			std::cerr << "\nEOF found. Exiting...\n";	
			return (1);
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid input. Try again: ";	
	}
	
	std::cout << "Enter the name of the zombies: " << std::flush;
	std::string name;
	while (!(std::cin >> name))
	{
		if (std::cin.eof())
		{
			std::cerr << "\nEOF found. Exiting...\n";	
			return (1);
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid input. Try again: ";	
	}
	
	std::cout << "\nCalling zombieHorde...\n";
	Zombie* horde = zombieHorde(n, name);
	if (!horde)
	{
		std::cerr << "Memory allocation failed.\n";
		return (1);
	}

	std::cout << "\nBack in main. Let's hear each zombie in the horde:\n";
	for (int i = 0; i < n; i++)
	{
		std::cout << i + 1 << ' ';
		horde[i].announce();
	}

	std::cout << "\nHope you haven't become too close."
		<< " It's time to destroy the horde.\n";
	delete[] horde;

	return (0);
}
