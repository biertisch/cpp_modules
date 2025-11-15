/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:02:30 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/15 19:12:01 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : ICharacter(), _name("John Doe")
{
	// std::cout << "Character default constructor called.\n";
	initSpells(_inventory, 4);
	initSpells(_unequiped, 100);
}

Character::Character(const std::string& name) : ICharacter(), _name(name)
{
	// std::cout << "Character parametrized constructor called.\n";
	initSpells(_inventory, 4);
	initSpells(_unequiped, 100);
}

Character::Character(const Character& other) : ICharacter(), _name(other._name)
{
	// std:cout << "Character copy constructor called.\n";
	copyInventory(other);
	initSpells(_unequiped, 100);
}

Character& Character::operator=(const Character& other)
{
	// std::cout << "Character assignment operator called.\n";
	if (this != &other)
	{
		_name = other._name;
		copyInventory(other);
		initSpells(_unequiped, 100);
	}
	return (*this);
}

Character::~Character()
{
	// std::cout << "Character destructor called.\n";
	removeSpells(_inventory, 4);
	removeSpells(_unequiped, 100);
}

void Character::initSpells(AMateria** array, int size)
{
	for (int i = 0; i < size; i++)
		array[i] = NULL;
}

void Character::copyInventory(const Character& other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other._inventory[i])
		{
			if (_inventory[i])
				delete _inventory[i];
			_inventory[i] = other._inventory[i]->clone();
		}
		else
			_inventory[i] = NULL;
	}
}

void Character::removeSpells(AMateria **array, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i])
		{
			delete array[i];
			array[i] = NULL;
		}
	}
}

const std::string& Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << "Nothing to equip.\n";
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			std::cout << "Equipped with " << m->getType() << ".\n";
			return;
		}
	}
	delete m;
	std::cout << "No space left in Character inventory.\n";
}

void Character::unequip(int idx)
{
	if (!validateIndex(idx))
		return;
	if (!_inventory[idx])
	{
		std::cout << "Nothing to unequip.\n";
		return;
	}
	for (int i = 0; i < 100; i++)
	{
		if (!_unequiped[i])
		{
			_unequiped[i] = _inventory[idx];
			_inventory[idx] = NULL;
			std::cout << _unequiped[i]->getType() << " unequipped.\n";
			return;
		}
	}
	std::cout << _inventory[idx]->getType() << " unequipped.\n";
	_inventory[idx] = NULL;
	std::cout << "Hope you saved its address, it's up to you to clean up!";
}


void Character::use(int idx, ICharacter& target)
{
	if (!validateIndex(idx))
		return;
	if (!_inventory[idx])
	{
		std::cout << "Nothing to use.\n";
		return;
	}
	_inventory[idx]->use(target);
	delete _inventory[idx];
	_inventory[idx] = NULL;
}

bool Character::validateIndex(int index)
{
	if (index < 0 || index > 3)
	{
		std::cout << "Invalid slot index.\n";
		return (false);
	}
	return (true);
}
