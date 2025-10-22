/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:32:05 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/22 12:58:50 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name_("CT"), maxHP_(100), hp_(100), energy_(100), damage_(30)
{
	std::cout << "Claptrap default constructor called\n";
}

ClapTrap::ClapTrap(const std::string& name) : name_(name), hp_(100), energy_(100), damage_(30)
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

const std::string& ClapTrap::getName() const
{
	return name_;
}

int ClapTrap::getHP() const
{
	return hp_;
}

unsigned int ClapTrap::getEnergy() const
{
	return energy_;
}

unsigned int ClapTrap::getDamage() const
{
	return damage_;
}

void ClapTrap::attack(const std::string& target)
{
	if (hp_ <= 0)
	{
		std::cout << "Dear old " << name_ << " lies innocuously dead, causing no harm.\n";
		return;
	}

	if (energy_ == 0)
	{
		std::cout << "Though ferocious, " << name_ << " is too exhausted to attack.\n";
		return;
	}

	energy_--;
	std::cout << name_ << " viciously attacks " << target << ", causing " << damage_ << " damage points!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	hp_ -= amount;

	if (hp_ > 0)
		std::cout << name_ << " was wounded, taking " << amount << " damage points.\n";
	else
		std::cout << "Honorable, fruitful " << name_ << " was fatally wounded, leaving behind his 89724 children.\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hp_ <= 0)
	{
		std::cout << "Sweet " << name_ << " lies unrepairably dead.\n";
		return;
	}

	if (energy_ == 0)
	{
		std::cout << "Though hurt, " << name_ << " is too exhausted to repair themselves.\n";
		return;
	}

	energy_--;
	if (hp_ + amount >= maxHP_)
	{
		hp_ = maxHP_;
		std::cout << name_ << " skillfully repairs themselves, regaining full health!\n";
	}
	else
	{
		hp_ += amount;
		std::cout << name_ << " skillfully repairs themselves, regaining " << amount << " hit points.\n";
	}
}

void ClapTrap::decreaseEnergy()
{
	energy_--;
}
