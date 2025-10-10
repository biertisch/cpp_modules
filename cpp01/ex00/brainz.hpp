/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainz.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:38:48 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/10 12:40:10 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAINZ_H
#define BRAINZ_H

#include "Zombie.hpp"
#include <iostream>

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif