/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:03:06 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/10 16:00:29 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type_("default")
{
	std::cout << "Animal default constructor called\n";
}

Animal::Animal(const std::string& type) : type_(type)
{
	std::cout << "Animal parametrized constructor called\n";
}

Animal::Animal(const Animal& other) : type_(other.type_)
{
	std::cout << "Animal copy constructor called\n";
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal assignment operator called\n";

	if (this != &other)
		type_ = other.type_;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called\n";
}

void Animal::makeSound() const
{
	std::cout << "Generic animal sound\n";
}

std::string Animal::getType() const
{
	return (type_);
}
