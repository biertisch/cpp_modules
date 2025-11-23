/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:34:44 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/23 10:22:20 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <string>

void capitalizeMessage(std::string& message)
{
	for (size_t i = 0; i < message.size(); i++)
		message[i] = std::toupper(message[i]);
}

void concatenateMessage(std::string& message, int argc, char **argv)
{
	for (int i = 0; argv[i]; i++)
	{
		message.append(argv[i]);
		if (i < argc - 1)
			message.append(" ");
	}
}

int main(int argc, char **argv)
{
	std::string message;

	if (argc > 1)
	{
		concatenateMessage(message, argc - 1, argv + 1);
		capitalizeMessage(message);
	}
	else
		message = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	std::cout << message << '\n';
	return 0;
}
