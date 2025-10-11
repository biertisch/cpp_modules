/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 09:58:45 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/11 10:02:44 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : type_("") {}

Weapon::Weapon(std::string type) : type_(type) {}

std::string	Weapon::getType()
{
	return type_;
}

void	Weapon::setType(std::string newType)
{
	type_ = newType;
}
