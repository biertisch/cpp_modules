/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:34:30 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/08 19:07:52 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void findContact(PhoneBook &phonebook)
{
	int	index;

	if (phonebook.displayAll())
		return;
	index = promptIndex();
	phonebook.displayContact(index);
}

void saveNewContact(PhoneBook &phonebook)
{
	std::string name;
	std::string surname;
	std::string nickname;
	std::string number;
	std::string secret;
	Contact		newContact;

	promptContactInfo(name, surname, nickname, number, secret);
	newContact = Contact(name, surname, nickname, number, secret);
	phonebook.addContact(newContact);
}

void displayOptions()
{
	std::string title = "MENU";
	int width = 28;
	int padding = (width - title.length()) / 2;

	std::cout << std::setfill('*') << std::setw(width) << "" << '\n';
	std::cout << std::setfill(' ') << std::setw(padding) << "" << title << '\n';
	std::cout << std::setfill('*') << std::setw(width) << "" << '\n';

	std::cout << "* ADD: save new contact" << '\n';
	std::cout << "* SEARCH: display contact" << '\n';
	std::cout << "* EXIT: quit program" << "\n\n";
}

int main()
{
	PhoneBook	phonebook;
	std::string	input;

	displayOptions();
	while (1)
	{
		input = promptOption();
		if (input == "ADD")
			saveNewContact(phonebook);
		else if (input == "SEARCH")
			findContact(phonebook);
		else if (input == "EXIT")
			break;
		else
			std::cout << "Invalid option." << '\n';
		std::cout << std::endl;
	}
	return 0;
}
