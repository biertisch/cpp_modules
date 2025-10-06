/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:34:30 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/06 15:36:56 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void findContact(PhoneBook phonebook)
{
	//display saved contacts
	//prompt user for index of entry
	//display contact information (or issue warning)
	(void)phonebook;
}

void saveNewContact(PhoneBook phonebook)
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
	std::cout << '\n' << "**************************" << '\n';
	std::cout << "           MENU           " << '\n';
	std::cout << "**************************" << '\n';
	std::cout << "* ADD: save new contact" << '\n';
	std::cout << "* SEARCH: display contact" << '\n';
	std::cout << "* EXIT: quit program" << "\n\n";
}

int main()
{
	PhoneBook	phonebook;
	std::string	input;

	while (1)
	{
		displayOptions();
		input = promptOption();
		if (input == "ADD")
			saveNewContact(phonebook);
		else if (input == "SEARCH")
			findContact(phonebook);
		else
			break;
	}
	return 0;
}
