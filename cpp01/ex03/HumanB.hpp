/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 10:11:30 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/23 12:33:11 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
	private:
		std::string _name;
		Weapon* _weapon;

	public:
		HumanB(const std::string& name);
		HumanB(const std::string& name, Weapon& weapon);
		~HumanB();

		void setWeapon(Weapon& weapon);
		void attack();
};

#endif