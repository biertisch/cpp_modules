/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:54:40 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/26 11:42:13 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
	: ClapTrap("default_clap_name", 100, 100, 50, 30), ScavTrap(), FragTrap(), _name("default")
{
	std::cout << "DiamondTrap default constructor called\n";
}

DiamondTrap::DiamondTrap(const std::string& name)
	: ClapTrap(name + "_clap_name", 100, 100, 50, 30), ScavTrap(name), FragTrap(name), _name(name)
{
	std::cout << "DiamondTrap parametrized constructor called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
	: ClapTrap(other), ScavTrap(other), FragTrap(other), _name(other._name)
{
	std::cout << "DiamondTrap copy constructor called\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << "DiamondTrap assignment operator called\n";
	if (this != &other)
	{
		ClapTrap::operator=(other);
		_name = other._name;
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
	std::cout << "Who am I? Am I truly myself " << _name << " or am I my ancestor " << ClapTrap::_name << "?\n";
}
