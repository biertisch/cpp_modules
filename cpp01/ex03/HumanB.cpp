/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 10:12:50 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/11 10:41:05 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name_(name), weapon_(NULL) {}

HumanB::HumanB(std::string name, Weapon& weapon) : name_(name), weapon_(&weapon) {}

void	HumanB::setWeapon(Weapon& weapon)
{
	weapon_ = &weapon;
}

void	HumanB::attack()
{
	std::cout << name_ << " attacks with their " << weapon_->getType() << '\n';
}
