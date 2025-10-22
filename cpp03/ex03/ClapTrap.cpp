/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:32:05 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/22 19:24:47 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name_("default"), maxHP_(10), hp_(10), energy_(10), damage_(0)
{
	std::cout << "Claptrap default constructor called\n";
}

ClapTrap::ClapTrap(const std::string& name) : name_(name), maxHP_(10), hp_(10), energy_(10), damage_(0)
{
	std::cout << "Claptrap parametrized constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& other) : name_(other.name_), hp_(other.hp_), energy_(other.energy_), damage_(other.damage_)
{
	std::cout << "Claptrap copy constructor called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Claptrap assignment operator called\n";

	if (this != &other)
	{
		name_ = other.name_;
		hp_ = other.hp_;
		energy_ = other.energy_;
		damage_ = other.damage_;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called\n";
}

void ClapTrap::attack(const std::string& target)
{
	if (hp_ <= 0)
	{
		std::cout << "Dear old ClapTrap " << name_ << " lies innocuously dead, causing no harm.\n";
		return;
	}

	if (energy_ == 0)
	{
		std::cout << "Though ferocious, ClapTrap " << name_ << " is too exhausted to attack.\n";
		return;
	}

	energy_--;
	std::cout << "ClapTrap " << name_ << " viciously attacks " << target << ", causing " << damage_ << " damage points!"
		<< " (Remaining energy: " << energy_ << ")\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	hp_ -= amount;

	if (hp_ > 0)
		std::cout << "ClapTrap " << name_ << " was wounded, taking " << amount << " damage points."
			<< " (Remaining health: " << hp_ << ")\n";
	else
		std::cout << "Honorable, fruitful ClapTrap " << name_ << " was fatally wounded, leaving behind his 89724 children.\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hp_ <= 0)
	{
		std::cout << "Sweet ClapTrap " << name_ << " lies unrepairably dead.\n";
		return;
	}

	if (energy_ == 0)
	{
		std::cout << "Though hurt, ClapTrap " << name_ << " is too exhausted to repair themselves.\n";
		return;
	}

	energy_--;
	if (hp_ + amount > maxHP_)
	{
		hp_ = maxHP_;
		std::cout << "ClapTrap " << name_ << " skillfully repairs themselves, regaining full health!"
			<< "(Current health: " << hp_ << "| Remaining energy: " << energy_ << ")\n";
	}
	else
	{
		hp_ += amount;
		std::cout << "ClapTrap " << name_ << " skillfully repairs themselves, regaining " << amount << " hit points."
			<< "(Current health: " << hp_ << " | Remaining energy: " << energy_ << ")\n";
	}
}
