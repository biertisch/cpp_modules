/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:28:38 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/28 11:57:01 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("default", 100, 100, 50, 20)
{
	std::cout << "ScavTrap default constructor called\n";
}

ScavTrap::ScavTrap(const std::string& name)	: ClapTrap(name, 100, 100, 50, 20)
{
	std::cout << "ScavTrap parametrized constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap& other)
	: ClapTrap(other._name, other._maxHP, other._hp, other._energy, other._damage)
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
	if (_hp <= 0)
	{
		std::cout << "Dear old ScavTrap " << _name << " lies innocuously dead, causing no harm.\n";
		return;
	}

	if (_energy <= 0)
	{
		std::cout << "Though ferocious, ScavTrap " << _name << " is too exhausted to attack.\n";
		return;
	}

	_energy--;
	std::cout << "ScavTrap " << _name << " valiantly attacks " << target << ", causing " << _damage << " damage points!\n";
	printCurrentStats();
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in gate keeper mode.\n";
}
