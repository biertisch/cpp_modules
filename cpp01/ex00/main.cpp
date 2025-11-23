/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:34:42 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/23 11:55:28 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

int main()
{
	std::cout << "Calling randomChump(Stella)...\n";
	randomChump("Stella");

	std::cout << '\n';

	std::cout << "Calling newZombie(Hector)...\n";
	Zombie *foo = newZombie("Hector");

	std::cout << '\n';

	std::cout << "Back in main. Zombie Hector's final words:\n";
	foo->announce();
	delete foo;
}
