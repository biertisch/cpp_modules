/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:17:27 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/26 15:11:04 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Cat")
{
	std::cout << "WrongCat default constructor called\n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor called\n";
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat assignment operator called\n";
	if (this != &other)
		_type = other._type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called\n";
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong meow\n";
}
