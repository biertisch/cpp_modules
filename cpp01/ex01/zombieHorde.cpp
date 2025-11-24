/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 15:54:42 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/24 14:18:46 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 0)
		N = 0;
	Zombie* horde = new (std::nothrow) Zombie[N];
	if (!horde)
		return (NULL);

	for (int i = 0; i < N; i++)
		horde[i].setName(name);

	return horde;
}
