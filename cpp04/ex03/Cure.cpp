/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:52:47 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/26 14:44:36 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	// std::cout << "Cure default constructor called.\n";
}

Cure::Cure(const Cure& other) : AMateria(other)
{
	// std::cout << "Cure copy constructor called.\n";
}

Cure& Cure::operator=(const Cure& other)
{
	// std::cout << "Cure assignment operator called.\n";
	(void)other;
	return *this;
}

Cure::~Cure()
{
	// std::cout << "Cure destructor called.\n";
}

Cure* Cure::clone() const
{
	std::cout << "Cure clone created.\n";
	return new (std::nothrow) Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
