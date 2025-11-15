/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 09:58:45 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/15 11:59:58 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : _type("") {}

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::~Weapon() {}

std::string	Weapon::getType()
{
	return _type;
}

void	Weapon::setType(std::string newType)
{
	_type = newType;
}
