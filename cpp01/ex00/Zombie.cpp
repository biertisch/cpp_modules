/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:57:00 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/11 09:48:00 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name_(name)
{
	std::cout << "Zombie " << name_ << " created!\n";
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name_ << " destroyed!\n";
}

void Zombie::announce()
{
	std::cout << name_ << ": BraiiiiiiinnnzzzZ...\n";
}
