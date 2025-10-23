/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:39:41 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/23 14:08:28 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::initStats()
{
	setMaxHP(100);
	setHP(100);
	setEnergy(100);
	setDamage(30);
}

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor called\n";
	initStats();
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap parametrized constructor called\n";
	initStats();
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called\n";
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap assignment operator called\n";
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called\n";
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << getName() << " is eagerly requesting a high-five!\n";
}
