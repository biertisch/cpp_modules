/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 09:54:05 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/23 12:29:53 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
	private:
		std::string	_type;

	public:
		Weapon();
		Weapon(const std::string& type);
		~Weapon();

		const std::string& getType() const;
		void setType(const std::string& newType);
};

#endif
