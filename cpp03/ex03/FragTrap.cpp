/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:39:41 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/22 18:36:51 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::initStats()
{
	maxHP_ = 100;
	hp_ = 100;
	energy_ = 100;
	damage_ = 30;
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
	std::cout << "FragTrap " << name_ << " is eagerly requesting a high-five!\n";
}
