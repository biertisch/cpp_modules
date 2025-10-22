/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:54:40 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/22 19:41:13 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void DiamondTrap::initStats()
{
	maxHP_ = 100;
	hp_ = 100;
	energy_ = 50;
	damage_ = 30;
}

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), ScavTrap(), FragTrap(), name_("default")
{
	std::cout << "DiamondTrap default constructor called\n";
	initStats();
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name),
	name_(name)
{
	std::cout << "DiamondTrap parametrized constructor called\n";
	initStats();
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other),
	name_(other.name_)
{
	std::cout << "DiamondTrap copy constructor called\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << "DiamondTrap assignment operator called\n";
	if (this != &other)
	{
		ClapTrap::operator=(other);
		name_ = other.name_;
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called\n";
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Who am I truly? Am I myself " << name_ << " or my ancestor " << ClapTrap::name_ << "?\n";
}
