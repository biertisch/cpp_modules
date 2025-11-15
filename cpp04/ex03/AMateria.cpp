/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:27:26 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/15 12:38:48 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("default")
{
	// std::cout << "AMateria default constructor called.\n";
}

AMateria::AMateria(const std::string& type) : _type(type)
{
	// std::cout << "AMateria parametrized constructor called.\n";
}

AMateria::AMateria(const AMateria& other) : _type(other._type)
{
	// std::cout << "AMateria copy constructor called.\n";
}

AMateria& AMateria::operator=(const AMateria& other)
{
	// std::cout << "AMateria assignment operator called.\n";
	(void)other;
	return (*this);
}

AMateria::~AMateria()
{
	// std::cout << "AMateria destructor called.\n";
}

const std::string& AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* uses generic magical ability on " << target.getName() << ".\n";
}
