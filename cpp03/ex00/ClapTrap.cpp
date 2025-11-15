/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:32:05 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/15 12:03:47 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Public
ClapTrap::ClapTrap() : _name("default"), _maxHP(10), _hp(10), _energy(10), _damage(0)
{
	std::cout << "Claptrap default constructor called\n";
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _maxHP(10), _hp(10), _energy(10), _damage(0)
{
	std::cout << "Claptrap parametrized constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _hp(other._hp), _energy(other._energy), _damage(other._damage)
{
	std::cout << "Claptrap copy constructor called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Claptrap assignment operator called\n";

	if (this != &other)
	{
		_name = other._name;
		_hp = other._hp;
		_energy = other._energy;
		_damage = other._damage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called\n";
}

void ClapTrap::attack(const std::string& target)
{
	if (_hp <= 0)
	{
		std::cout << "Dear old ClapTrap " << _name << " lies innocuously dead, causing no harm.\n";
		return;
	}

	if (_energy == 0)
	{
		std::cout << "Though ferocious, ClapTrap " << _name << " is too exhausted to attack.\n";
		return;
	}

	_energy--;
	std::cout << "ClapTrap " << _name << " viciously attacks " << target << ", causing " << _damage << " damage points!\n";
	printCurrentStats();
}

void ClapTrap::takeDamage(unsigned int amount)
{
	_hp -= amount;

	if (_hp > 0)
	{
		std::cout << "ClapTrap " << _name << " was wounded, taking " << amount << " damage points.\n";
		printCurrentStats();
	}
	else
		std::cout << "Honorable, fruitful ClapTrap " << _name << " was fatally wounded, leaving behind 89724 children.\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hp <= 0)
	{
		std::cout << "Sweet ClapTrap " << _name << " lies unrepairably dead.\n";
		return;
	}

	if (_energy == 0)
	{
		std::cout << "Though hurt, ClapTrap " << _name << " is too exhausted to repair themselves.\n";
		return;
	}

	_energy--;
	if (_hp + amount > _maxHP)
	{
		_hp = _maxHP;
		std::cout << "ClapTrap " << _name << " skillfully repairs themselves, regaining full health!\n";
	}
	else
	{
		_hp += amount;
		std::cout << "ClapTrap " << _name << " skillfully repairs themselves, regaining " << amount << " hit points.\n";
	}
	printCurrentStats();
}

// Protected
std::string ClapTrap::getName() const
{
	return _name;
}

unsigned int ClapTrap::getMaxHP() const
{
	return _maxHP;
}

int ClapTrap::getHP() const
{
	return _hp;
}

unsigned int ClapTrap::getEnergy() const
{
	return _energy;
}

unsigned int ClapTrap::getDamage() const
{
	return _damage;
}

void ClapTrap::setName(const std::string& newName)
{
	_name = newName;
}

void ClapTrap::printCurrentStats() const
{
	std::cout << '[' << _name << "'s current stats: HP=" << _hp << " Energy=" << _energy << " Damage=" << _damage << "]\n";
}

void ClapTrap::setMaxHP(unsigned int newMaxHP)
{
	_maxHP = newMaxHP;
}

void ClapTrap::setHP(int newHP)
{
	_hp = newHP;
}

void ClapTrap::setEnergy(unsigned int newEnergy)
{
	_energy = newEnergy;
}

void ClapTrap::setDamage(unsigned int newDamage)
{
	_damage = newDamage;
}
