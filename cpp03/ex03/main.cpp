/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:57:47 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/22 19:33:11 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap frankie("Frankie");
	frankie.attack("their own reflection in the mirror");
	frankie.takeDamage(99);
	DiamondTrap newFrankie(frankie);
	frankie.takeDamage(1);
	newFrankie.beRepaired(20);
	DiamondTrap newestFrankie;
	newestFrankie = newFrankie;
	newestFrankie.attack("their parents");
	newestFrankie.whoAmI();
}
