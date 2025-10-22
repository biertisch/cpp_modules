/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:57:47 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/22 12:51:19 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap coolGuy("Cool Guy");
	coolGuy.attack("lameness");
	coolGuy.takeDamage(99);
	FragTrap newCoolGuy(coolGuy);
	coolGuy.takeDamage(1);
	newCoolGuy.beRepaired(20);
	FragTrap newestCoolGuy;
	newestCoolGuy = newCoolGuy;
	newestCoolGuy.attack("outdated fashion trends");
	newestCoolGuy.highFivesGuys();
}
