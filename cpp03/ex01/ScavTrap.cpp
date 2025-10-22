/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:28:38 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/22 19:30:13 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::initStats()
{
	maxHP_ = 100;
	hp_ = 100;
	energy_ = 50;
	damage_ = 20;
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
	if (hp_ <= 0)
	{
		std::cout << "Dear old ScavTrap " << name_ << " lies innocuously dead, causing no harm.\n";
		return;
	}

	if (energy_ == 0)
	{
		std::cout << "Though ferocious, ScavTrap " << name_ << " is too exhausted to attack.\n";
		return;
	}

	energy_--;
	std::cout << "ScavTrap " << name_ << " valiantly attacks " << target << ", causing " << damage_ << " damage points!"
		<< " (Remaining energy: " << energy_ << ")\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name_ << " is now in gate keeper mode.\n";
}
