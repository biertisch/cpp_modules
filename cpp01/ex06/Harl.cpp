/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:37:27 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/15 12:01:14 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	_levels[0] = "DEBUG";
	_levels[1] = "INFO";
	_levels[2] = "WARNING";
	_levels[3] = "ERROR";
}

Harl::~Harl() {}

void Harl::debug()
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."
		<< " I really do!\n";
}

void Harl::info()
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger!"
		<< " If you did, I wouldn't be asking for more!\n";
}

void Harl::warning()
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free."
		<< " I've been coming for years, whereas you started working here just last month.\n";
}

void Harl::error()
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

int Harl::getLevelIndex(const std::string& level)
{
	for (int i = 0; i < N; i++)
		if (level == _levels[i])
			return i;
	return -1;
}

void Harl::complain(std::string level)
{
	void (Harl::*functions[N])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < N; i++)
	{
		if (level == _levels[i])
		{
			(this->*functions[i])();
			return;
		}
	}

	std::cout << "[ Harl is feeding their ulcer, mumbling indiscernible complaints ]\n";
}

void Harl::filter(const std::string& level)
{
	int	 index = getLevelIndex(level);
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
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break;
	}
}
