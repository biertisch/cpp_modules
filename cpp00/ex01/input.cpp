/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:34:25 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/14 11:30:28 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

bool promptInfo(const std::string description, std::string &input)
{

	std::cout << "Enter " << description << ": " << std::flush;
	if (!std::getline(std::cin, input))
	{
		if (std::cin.eof())
			std::cout << "EOF detected. Exiting...\n";
		else
			std::cerr << "Error reading input.\n";
		std::cin.clear();
		return false;
	}
	return true;
}

bool	promptIndex(int &index)
{
	std::string input;
	std::stringstream numericString;

	if (!promptInfo("index", input))
		return false;
	numericString.str(input);
	numericString >> index;
	return true;
}

bool promptContactInfo(std::string &name, std::string &surname,
	std::string &nickname, std::string &number, std::string &secret)
{
	while (name.empty())
		if (!promptInfo("first name", name))
			return false;
	while (surname.empty())
		if (!promptInfo("last name", surname))
			return false;
	while (nickname.empty())
		if (!promptInfo("nickname", nickname))
			return false;
	while (number.empty())
		if (!promptInfo("phone number", number))
			return false;
	while (secret.empty())
		if (!promptInfo("darkest secret", secret))
			return false;
	return true;
}

bool promptOption(std::string &input)
{
	while (input.empty())
		if (!promptInfo("option", input))
			return false;
	return true;
}
