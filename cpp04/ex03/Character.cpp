/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:02:30 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/11 16:48:26 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : ICharacter(), name_("John Doe")
{
	// std::cout << "Character default constructor called\n";
	initSpells(inventory_, 4);
	initSpells(unequiped_, 100);	
}

Character::Character(const std::string& name) : ICharacter(), name_(name)
{
	// std::cout << "Character parametrized constructor called\n";
	initSpells(inventory_, 4);
	initSpells(unequiped_, 100);	
}

Character::Character(const Character& other) : ICharacter(), name_(other.name_)
{
	// std:cout << "Character copy constructor called\n";
	copyInventory(other);
	initSpells(unequiped_, 100);
}

Character& Character::operator=(const Character& other)
{
	// std::cout << "Character assignment operator called\n";
	if (this != &other)
	{
		name_ = other.name_;
		copyInventory(other);
		initSpells(unequiped_, 100);
	}
	return (*this);
}

Character::~Character()
{
	// std::cout << "Character destructor called\n";
	removeSpells(inventory_, 4);
	removeSpells(unequiped_, 100);
}

void Character::initSpells(AMateria** array, int size)
{
	for (int i = 0; i < size; i++)
		array[i] = 0;
}

void Character::copyInventory(const Character& other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other.inventory_[i])
		{
			if (inventory_[i])
				delete inventory_[i];
			inventory_[i] = other.inventory_[i]->clone();
		}
		else
			inventory_[i] = 0;
	}
}

void Character::removeSpells(AMateria **array, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (array[i])
			delete array[i];
	}
}

const std::string& Character::getName() const
{
	return name_;
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
		if (!inventory_[i])
		{
			inventory_[i] = m;
			std::cout << "Equipped with " << m->getType() << "\n";
			return;
		}
	}
	std::cout << "No space left in the inventory\n";
}

void Character::unequip(int idx)
{
	if (!validateIndex(idx))
		return;
	if (!inventory_[idx])
	{
		std::cout << "Nothing to unequip.\n";
		return;
	}
	for (int i = 0; i < 100; i++)
	{
		if (!unequiped_[i])
		{
			unequiped_[i] = inventory_[idx];
			inventory_[idx] = 0;
			std::cout << unequiped_[i]->getType() << " unequipped.\n";
			return;
		}
	}
	std::cout << inventory_[idx]->getType() << " unequipped.\n";
	inventory_[idx] = 0;
	std::cout << "Hope you saved its address, it's up to you to clean up!";
}


void Character::use(int idx, ICharacter& target)
{
	if (!validateIndex(idx))
		return;
	if (!inventory_[idx])
	{
		std::cout << "Nothing to use.\n";
		return;
	}
	inventory_[idx]->use(target);
	inventory_[idx] = 0;
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
