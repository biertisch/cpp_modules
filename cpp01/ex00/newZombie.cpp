/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:02:52 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/10 12:41:05 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brainz.hpp"
#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	return new Zombie(name);
}
