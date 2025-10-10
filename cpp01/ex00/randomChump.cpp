/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:30:38 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/10 12:41:20 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brainz.hpp"
#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie chump = Zombie(name);
	chump.announce();
}
