/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 09:58:45 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/23 12:42:46 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : _type("overgrown nails") {}

Weapon::Weapon(const std::string& type) : _type(type) {}

Weapon::~Weapon() {}

const std::string& Weapon::getType() const
{
	return _type;
}

void Weapon::setType(const std::string& newType)
{
	_type = newType;
}
