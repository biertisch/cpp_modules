/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:54:42 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/10 17:11:44 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "moarBrainz.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 0)
		N = 0;
	Zombie* horde = new Zombie[N];
	
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	
	return horde;
}
