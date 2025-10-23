/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:32:05 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/23 14:04:41 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Public
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
	std::cout << "ClapTrap " << name_ << " viciously attacks " << target << ", causing " << damage_ << " damage points!\n";
	printCurrentStats();
}

void ClapTrap::takeDamage(unsigned int amount)
{
	hp_ -= amount;

	if (hp_ > 0)
	{
		std::cout << "ClapTrap " << name_ << " was wounded, taking " << amount << " damage points.\n";
		printCurrentStats();
	}
	else
		std::cout << "Honorable, fruitful ClapTrap " << name_ << " was fatally wounded, leaving behind 89724 children.\n";
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
		std::cout << "ClapTrap " << name_ << " skillfully repairs themselves, regaining full health!\n";
	}
	else
	{
		hp_ += amount;
		std::cout << "ClapTrap " << name_ << " skillfully repairs themselves, regaining " << amount << " hit points.\n";
	}
	printCurrentStats();
}

// Protected
std::string ClapTrap::getName() const
{
	return name_;
}

unsigned int ClapTrap::getMaxHP() const
{
	return maxHP_;
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

void ClapTrap::setName(const std::string& newName)
{
	name_ = newName;
}

void ClapTrap::printCurrentStats() const
{
	std::cout << '[' << name_ << "'s current stats: HP=" << hp_ << " Energy=" << energy_ << " Damage=" << damage_ << "]\n";
}

void ClapTrap::setMaxHP(unsigned int newMaxHP)
{
	maxHP_ = newMaxHP;
}

void ClapTrap::setHP(int newHP)
{
	hp_ = newHP;
}

void ClapTrap::setEnergy(unsigned int newEnergy)
{
	energy_ = newEnergy;	
}

void ClapTrap::setDamage(unsigned int newDamage)
{
	damage_ = newDamage;
}
