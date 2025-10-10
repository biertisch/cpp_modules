/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:57:00 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/10 16:37:08 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("default") {}

Zombie::Zombie(std::string name) : name(name)
{
	std::cout << "Zombie " << name << " created!\n";
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " destroyed!\n";
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string newName)
{
	name = newName;
}
