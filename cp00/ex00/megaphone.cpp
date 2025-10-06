/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:34:44 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/06 15:34:45 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

void printMessage(std::string message)
{
	std::cout << message << '\n';
}

void capitalizeMessage(std::string &message)
{
	for (size_t i = 0; i < message.size(); i++)
		message[i] = std::toupper(message[i]);
}

std::string concatenateMessage(int argc, char **argv)
{
	std::string message;

	for (int i = 0; *argv; i++, argv++)
	{
		message.append(*argv);
		if (i < argc - 1)
			message.append(" ");
	}
	return message;
}

int main(int argc, char **argv)
{
	std::string message;

	if (argc > 1)
	{
		message = concatenateMessage(argc - 1, argv + 1);
		capitalizeMessage(message);
	}
	else
		message = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	printMessage(message);
	return 0;
}
