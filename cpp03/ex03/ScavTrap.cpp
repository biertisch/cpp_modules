/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:28:38 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/23 14:03:59 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::initStats()
{
	setMaxHP(100);
	setHP(100);
	setEnergy(50);
	setDamage(20);
}

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called\n";
	initStats();
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "ScavTrap parametrized constructor called\n";
	initStats();
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
		std::cout << "Though ferocious, ScavTrap " << getName() << " is too exhausted to attack.\n";
		return;
	}

	setEnergy(getEnergy() - 1);
	std::cout << "ScavTrap " << getName() << " valiantly attacks " << target << ", causing " << getDamage() << " damage points!\n";
	printCurrentStats();
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName() << " is now in gate keeper mode.\n";
}
