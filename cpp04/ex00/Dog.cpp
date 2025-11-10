/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:46:20 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/10 16:00:06 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called\n";
}

Dog::Dog(const Dog& other): Animal(other)
{
	std::cout << "Dog copy constructor called\n";
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog assignment operator called\n";
	if (this != &other)
		type_ = other.type_;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
}

void Dog::makeSound() const
{
	std::cout << "Woof\n";
}
