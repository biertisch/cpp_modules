/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:46:20 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/15 12:05:25 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called\n";
	_brain = new Brain("Dog");
}

Dog::Dog(const Dog& other): Animal(other)
{
	std::cout << "Dog copy constructor called\n";
	_brain = new Brain("Dog");
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog assignment operator called\n";
	if (this != &other)
	{
		_type = other._type;
		_brain = new Brain("Dog");
	}
	return (*this);
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
	return (_brain->getIdea(index));
}

void Dog::setIdea(int index, const std::string& idea)
{
	_brain->setIdea(index, idea);
}
