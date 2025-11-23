/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 10:04:56 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/23 12:32:06 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA
{
	private:
		std::string _name;
		Weapon& _weapon;

	public:
		HumanA(const std::string& name, Weapon& weapon);
		~HumanA();

		void attack();
};

#endif