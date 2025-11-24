/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:37:27 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/24 15:45:22 by beatde-a         ###   ########.fr       */
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
	static std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++)
		if (level == levels[i])
			return i;
	return -1;
}

void Harl::complain(std::string level)
{
	static void (Harl::*functions[4])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	int i = getLevelIndex(level);
	if (i != -1)
		(this->*functions[i])();
	else
		std::cout << "[ Harl is feeding their ulcer, mumbling indiscernible complaints. ]\n";
}

void Harl::filter(const std::string& level)
{
	int index = getLevelIndex(level);
	switch(index)
	{
		case 0:
			debug();
			std::cout << '\n';
			// fallthrough
		case 1:
			info();
			std::cout << '\n';
			//fallthrough
		case 2:
			warning();
			std::cout << '\n';
			//fallthrough
		case 3:
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems. ]\n";
			break;
	}
}
