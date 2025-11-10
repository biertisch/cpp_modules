/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:03:06 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/10 16:07:25 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type_("default")
{
	std::cout << "WrongAnimal default constructor called\n";
}

WrongAnimal::WrongAnimal(const std::string& type) : type_(type)
{
	std::cout << "WrongAnimal parametrized constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type_(other.type_)
{
	std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal assignment operator called\n";

	if (this != &other)
		type_ = other.type_;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called\n";
}

void WrongAnimal::makeSound() const
{
	std::cout << "Generic wrong animal sound\n";
}

std::string WrongAnimal::getType() const
{
	return (type_);
}
