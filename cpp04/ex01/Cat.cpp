/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:17:27 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/10 17:26:15 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called\n";
	brain_ = new Brain("Cat");
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat copy constructor called\n";
	brain_ = new Brain(*other.brain_);
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat assignment operator called\n";
	if (this != &other)
	{
		type_ = other.type_;
		delete brain_;
		brain_ = new Brain(*other.brain_);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
	delete brain_;
}

void Cat::makeSound() const
{
	std::cout << "Meow\n";
}

std::string Cat::getIdea(int index) const
{
	return (brain_->getIdea(index));
}

void Cat::setIdea(int index, const std::string& idea)
{
	brain_->setIdea(index, idea);
}
