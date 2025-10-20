/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:28:38 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/20 19:09:27 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called\n";
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "ScavTrap parametrized constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap assignment operator called\n";
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called\n";
}

void ScavTrap::attack(const std::string& target)
{
	if (getHP() <= 0)
	{
		std::cout << "Dear old ScavTrap " << getName() << " lies innocuously dead, causing no harm.\n";
		return;
	}

	if (getEnergy() == 0)
	{
		std::cout << "Though ferocious, " << getName() << " is too exhausted to attack.\n";
		return;
	}

	decreaseEnergy();
	std::cout << getName() << " valiantly attacks " << target << ", causing " << getDamage() << " damage points!\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " is now in gate keeper mode.\n";
}
