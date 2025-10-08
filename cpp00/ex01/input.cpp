/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:34:25 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/08 19:28:55 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string promptInfo(std::string description)
{
	std::string	input;

	std::cout << "Enter " << description << ": ";
	std::getline(std::cin, input);
	return (input);
}

int	promptIndex()
{
	std::string input;
	std::stringstream numericString;
	int index;

	input = promptInfo("index");
	numericString.str(input);
	numericString >> index;
	return (index);
}

void promptContactInfo(std::string &name, std::string &surname,
	std::string &nickname, std::string &number, std::string &secret)
{
	while (name == "")
		name = promptInfo("first name");
	while (surname == "")
		surname = promptInfo("last name");
	while (nickname == "")
		nickname = promptInfo("nickname");
	while (number == "")
		number = promptInfo("phone number");
	while (secret == "")
		secret = promptInfo("darkest secret");
}

std::string promptOption()
{
	std::string	input;

	while (input == "")
		input = promptInfo("option");
	return input;
}
