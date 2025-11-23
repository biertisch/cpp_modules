/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 10:12:50 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/23 12:43:18 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : _name(name), _weapon(NULL) {}

HumanB::HumanB(const std::string& name, Weapon& weapon) : _name(name), _weapon(&weapon) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}

void HumanB::attack()
{
	if (!_weapon)
		std::cout << _name << " attacks with their bare hands.\n";
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << ".\n";
}
