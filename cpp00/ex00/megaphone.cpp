/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:34:44 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/24 11:54:34 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	std::string message;

	if (argc > 1)
	{
		for (int i = 1; argv[i]; i++)
			message.append(argv[i]);
		for (size_t i = 0; i < message.size(); i++)
			message[i] = std::toupper(message[i]);
	}
	else
		message = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	std::cout << message << '\n';
	return 0;
}
