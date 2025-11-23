/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:57:00 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/23 12:14:04 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("default") {}

Zombie::Zombie(const std::string& name) : _name(name)
{
	std::cout << "Zombie " << _name << " created!\n";
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " destroyed!\n";
}

void Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(const std::string& name)
{
	_name = name;
}