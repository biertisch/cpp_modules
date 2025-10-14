/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:54:33 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/14 11:31:23 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "moarBrainz.hpp"

int main()
{
	int n;
	std::cout << "Enter the number of zombies in the horde: " << std::flush;
	std::cin >> n;
	
	std::string name;
	std::cout << "Enter the name of the zombies: " << std::flush;
	std::cin >> name;

	Zombie* horde;
	std::cout << "\nCalling zombieHorde...\n";
	horde = zombieHorde(n, name);

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
