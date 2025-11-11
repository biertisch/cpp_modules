/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:27:26 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/11 16:58:53 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type_("default")
{
	// std::cout << "AMateria default constructor called\n";
}

AMateria::AMateria(const std::string& type) : type_(type)
{
	// std::cout << "AMateria parametrized constructor called\n";
}

AMateria::AMateria(const AMateria& other) : type_(other.type_)
{
	// std::cout << "AMateria copy constructor called\n";
}

AMateria& AMateria::operator=(const AMateria& other)
{
	// std::cout << "AMateria assignment operator called\n";
	(void)other;
	return (*this);
}

AMateria::~AMateria()
{
	// std::cout << "AMateria destructor called\n";
}

const std::string& AMateria::getType() const
{
	return (type_);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* uses generic magical ability on " << target.getName() << "\n";
}
