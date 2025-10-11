/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:34:30 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/11 09:44:37 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

bool findContact(PhoneBook &phonebook)
{
	int	index;

	if (!phonebook.displayAll())
		return true;
	if (!promptIndex(index))
			return false;
	phonebook.displayContact(index);
	return true;
}

bool saveNewContact(PhoneBook &phonebook)
{
	std::string name;
	std::string surname;
	std::string nickname;
	std::string number;
	std::string secret;

	if (!promptContactInfo(name, surname, nickname, number, secret))
		return false;

	Contact	newContact = Contact(name, surname, nickname, number, secret);
	phonebook.addContact(newContact);
	return true;
}

void displayOptions()
{
	const std::string title = "MENU";
	int width = 28;
	int padding = (width - title.length()) / 2;

	std::cout << std::setfill('*') << std::setw(width) << "" << '\n';
	std::cout << std::setfill(' ') << std::setw(padding) << "" << title << '\n';
	std::cout << std::setfill('*') << std::setw(width) << "" << '\n';

	std::cout << "ADD: save new contact" << '\n';
	std::cout << "SEARCH: display contact" << '\n';
	std::cout << "EXIT: quit program" << "\n\n";
}

int main()
{
	PhoneBook	phonebook;
	std::string	input;

	displayOptions();
	while (1)
	{
		if (!promptOption(input))
			break;
		if (input == "ADD" && !saveNewContact(phonebook))
			break;
		else if (input == "SEARCH" && !findContact(phonebook))
			break;
		else if (input == "EXIT")
			break;
		else if (input != "ADD" && input != "SEARCH" && input != "EXIT")
			std::cout << "Invalid option." << '\n';
		std::cout << '\n';
		input = "";
	}
	return 0;
}
