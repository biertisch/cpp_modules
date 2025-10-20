/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:57:47 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/20 19:11:50 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap keeper("Keeper");
	keeper.attack("boredom");
	keeper.takeDamage(99);
	ScavTrap newKeeper(keeper);
	keeper.takeDamage(1);
	newKeeper.beRepaired(20);
	ScavTrap newestKeeper;
	newestKeeper = newKeeper;
	newestKeeper.attack("the wind");
	newestKeeper.guardGate();
}
