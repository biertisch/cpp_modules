/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:41:03 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/15 12:38:19 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	// std::cout << "Ice default constructor called.\n";
}

Ice::Ice(const Ice& other) : AMateria(other)
{
	// std::cout << "Ice copy constructor called.\n";
}

Ice& Ice::operator=(const Ice& other)
{
	// std::cout << "Ice assignment operator called.\n";
	(void)other;
	return (*this);
}

Ice::~Ice()
{
	// std::cout << "Ice destructor called.\n";
}

Ice* Ice::clone() const
{
	std::cout << "Ice clone created.\n";
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
