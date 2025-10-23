/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:22:41 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/23 11:55:55 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string 	name_;
		unsigned int	maxHP_;
		int				hp_;
		unsigned int	energy_;
		unsigned int	damage_;

	protected:
		std::string getName() const;
		unsigned int getMaxHP() const;
		int getHP() const;
		unsigned int getEnergy() const;
		unsigned int getDamage() const;
		void printCurrentStats() const;

		void setName(const std::string& newName);
		void setMaxHP(unsigned int newMaxHP);
		void setHP(int newHP);
		void setEnergy(unsigned int newEnergy);
		void setDamage(unsigned int newDamage);

	public:
		ClapTrap();
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif