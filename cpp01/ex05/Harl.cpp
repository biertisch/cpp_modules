/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:37:27 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/12 12:17:31 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

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

void Harl::complain(std::string level)
{
	std::string levels[N] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[N])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < N; i++)
	{
		if (level == levels[i])
		{
			(this->*functions[i])();
			return;
		}
	}
	std::cout << "[ Harl is feeding their ulcer, mumbling indiscernible complaints ]\n";
}
