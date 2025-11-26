/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:03:06 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/26 15:20:16 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("default")
{
	std::cout << "AAnimal default constructor called\n";
}

AAnimal::AAnimal(const std::string& type) : _type(type)
{
	std::cout << "AAnimal parametrized constructor called\n";
}

AAnimal::AAnimal(const AAnimal& other) : _type(other._type)
{
	std::cout << "AAnimal copy constructor called\n";
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	std::cout << "AAnimal assignment operator called\n";

	if (this != &other)
		_type = other._type;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called\n";
}

std::string AAnimal::getType() const
{
	return _type;
}
