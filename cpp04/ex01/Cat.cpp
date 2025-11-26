/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:17:27 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/26 15:17:35 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(new (std::nothrow) Brain("Cat"))
{
	std::cout << "Cat default constructor called\n";
}

Cat::Cat(const Cat& other) : Animal(other), _brain(new (std::nothrow) Brain(*other._brain))
{
	std::cout << "Cat copy constructor called\n";
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat assignment operator called\n";
	if (this != &other)
	{
		_type = other._type;
		delete _brain;
		_brain = new (std::nothrow) Brain(*other._brain);
		if (!_brain)
			std::cerr << "Memory allocation failed.\n";
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
	delete _brain;
}

void Cat::makeSound() const
{
	std::cout << "Meow\n";
}

std::string Cat::getIdea(int index) const
{
	if (!_brain)
		return "";
	return _brain->getIdea(index);
}

void Cat::setIdea(int index, const std::string& idea)
{
	if (_brain)
		_brain->setIdea(index, idea);
}
