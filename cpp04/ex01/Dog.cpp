/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:46:20 by beatde-a          #+#    #+#             */
/*   Updated: 2025/12/01 17:00:35 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new (std::nothrow) Brain("Dog"))
{
	std::cout << "Dog default constructor called\n";
}

Dog::Dog(const Dog& other): Animal(other), _brain(new (std::nothrow) Brain("Dog"))
{
	std::cout << "Dog copy constructor called\n";
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog assignment operator called\n";
	if (this != &other)
	{
		_type = other._type;
		delete _brain;
		_brain = new (std::nothrow) Brain("Dog");
		if (!_brain)
			std::cerr << "Memory allocation failed.\n";
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
	delete _brain;
}

void Dog::makeSound() const
{
	std::cout << "Woof\n";
}

std::string Dog::getIdea(int index) const
{
	if (!_brain)
		return "";
	return _brain->getIdea(index);
}

void Dog::setIdea(int index, const std::string& idea)
{
	if (_brain)
		_brain->setIdea(index, idea);
}
