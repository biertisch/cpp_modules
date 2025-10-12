/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 10:08:03 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/12 12:15:55 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name_(name), weapon_(weapon) {}

HumanA::~HumanA() {}

void	HumanA::attack()
{
	std::cout << name_ << " attacks with their " << weapon_.getType() << '\n';
}
