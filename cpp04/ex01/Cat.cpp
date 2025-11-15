/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:17:27 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/15 12:05:25 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called\n";
	_brain = new Brain("Cat");
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat copy constructor called\n";
	_brain = new Brain(*other._brain);
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat assignment operator called\n";
	if (this != &other)
	{
		_type = other._type;
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	return (*this);
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
	return (_brain->getIdea(index));
}

void Cat::setIdea(int index, const std::string& idea)
{
	_brain->setIdea(index, idea);
}
