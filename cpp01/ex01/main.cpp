/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:54:33 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/23 12:41:23 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
	std::cout << "Enter the number of zombies in the horde: " << std::flush;
	int n;
	std::cin >> n;

	std::cout << "Enter the name of the zombies: " << std::flush;
	std::string name;
	std::cin >> name;

	std::cout << "\nCalling zombieHorde...\n";
	Zombie* horde = zombieHorde(n, name);

	std::cout << "\nBack in main. Let's hear each zombie in the horde:\n";
	for (int i = 0; i < n; i++)
	{
		std::cout << i + 1 << ' ';
		horde[i].announce();
	}

	std::cout << "\nHope you haven't become too close."
		<< " It's time to destroy the horde.\n";
	delete[] horde;
}
