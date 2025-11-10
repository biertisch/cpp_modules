/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:46:20 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/10 17:23:34 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called\n";
	brain_ = new Brain("Dog");
}

Dog::Dog(const Dog& other): Animal(other)
{
	std::cout << "Dog copy constructor called\n";
	brain_ = new Brain("Dog");
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog assignment operator called\n";
	if (this != &other)
	{
		type_ = other.type_;
		brain_ = new Brain("Dog");
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
	delete brain_;
}

void Dog::makeSound() const
{
	std::cout << "Woof\n";
}

std::string Dog::getIdea(int index) const
{
	return (brain_->getIdea(index));
}

void Dog::setIdea(int index, const std::string& idea)
{
	brain_->setIdea(index, idea);
}
