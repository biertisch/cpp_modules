/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:57:27 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/26 14:57:42 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria* _inventory[4];
		AMateria* _unequiped[100];

		void initSpells(AMateria** array, int size);
		void copyInventory(const Character& other);
		void removeSpells(AMateria** array, int size);
		bool validateIndex(int index) const;

	public:
		Character();
		Character(const std::string& name);
		Character(const Character& other);
		Character& operator=(const Character& other);
		~Character();

		const std::string& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif