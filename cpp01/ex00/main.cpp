/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:34:42 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/10 16:46:29 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brainz.hpp"
#include "Zombie.hpp"

int main()
{
	std::cout << "Calling randomChump(Stella)...\n";
	randomChump("Stella");

	std::cout << '\n';
	
	std::cout << "Calling newZombie(Hector)...\n";
	Zombie *bar = newZombie("Hector");
	
	std::cout << '\n';

	std::cout << "Back in main. Zombie Hector's final words:\n";
	bar->announce();
	delete bar;
}
