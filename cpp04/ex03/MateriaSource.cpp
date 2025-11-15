/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 12:09:51 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/15 19:12:46 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource()
{
	// std::cout << "MateriaSource default constructor called.\n";
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other) : IMateriaSource()
{
	// std::cout << "MateriaSource copy constructor called.\n";
	copyInventory(other);
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	// std::cout << "MateriaSource assignment operator called.\n";
	if (this != &other)
		copyInventory(other);
	return (*this);
}

MateriaSource::~MateriaSource()
{
	// std::cout << "MateriaSource destructor called.\n";
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
}

void MateriaSource::copyInventory(const MateriaSource& other)
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

void MateriaSource::learnMateria(AMateria* spell)
{
	if (!spell)
	{
		std::cout << "Nothing to learn.\n";
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = spell;
			std::cout << "Learnt " << spell->getType() << ".\n";
			return;
		}
	}
	delete spell;
	std::cout << "No space left in MateriaSource inventory.\n";
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4; i++)
		if (_inventory[i]->getType() == type)
			return (_inventory[i]->clone());
	std::cout << "No match found to create " << type << ".\n";
	return (0);
}
