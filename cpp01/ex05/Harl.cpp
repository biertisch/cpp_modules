/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:37:27 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/23 18:26:22 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug()
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info()
{
	std::cout << "[ INFO ]\n"
		<< "I cannot believe adding extra bacon costs more money. "
		<< "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void Harl::warning()
{
	std::cout << "[ WARNING ]\n"
		<< "I think I deserve to have some extra bacon for free."
		<< " I've been coming for years, whereas you started working here just last month.\n";
}

void Harl::error()
{
	std::cout << "[ ERROR ]\n"
		<< "This is unacceptable! I want to speak to the manager now.\n";
}

int Harl::getLevelIndex(const std::string& level)
{
	static std::string levels[N] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < N; i++)
		if (level == levels[i])
			return i;
	return -1;
}

void Harl::complain(std::string level)
{
	static void (Harl::*functions[N])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	int i = Harl::getLevelIndex(level);
	if (i != -1)
		(this->*functions[i])();
	else
		std::cout << "[ Harl is feeding their ulcer, mumbling indiscernible complaints. ]\n";
}
