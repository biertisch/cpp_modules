/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:34:37 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/08 19:17:46 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : nextIndex(0), validContacts(0) {}

void	PhoneBook::addContact(Contact newContact)
{
	contacts[nextIndex] = newContact;
	nextIndex = (nextIndex + 1) % MAX_SIZE;
	if (validContacts < MAX_SIZE)
		validContacts++;
}

Contact	PhoneBook::getContact(int index)
{
	return contacts[index];
}

std::string	PhoneBook::formatField(const std::string &str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

int	PhoneBook::displayAll()
{
	if (!validContacts)
	{
		std::cout << "No contacts." << '\n';
		return -1;
	}

	std::string title = "CONTACTS";
	int padding = (65 - title.length()) / 2;

	std::cout << '\n' << std::setfill(' ') << std::setw(padding) << title << '\n';
	std::cout << std::right;
	for (int i = 1; i <= validContacts; i++)
	{
		std::cout << std::setfill(' ') << std::setw(10) << i << " | "
			<< std::setw(10) << PhoneBook::formatField(contacts[i - 1].getFirstName()) << " | "
			<< std::setw(10) << PhoneBook::formatField(contacts[i - 1].getLastName()) << " | "
			<< std::setw(10) << PhoneBook::formatField(contacts[i - 1].getNickname()) << '\n';
	}
	return 0;
}

void	PhoneBook::displayContact(int index)
{
	if (index < 1 || index > validContacts)
	{
		std::cout << "Invalid index." << '\n';
		return;
	}
	std::cout << "\nCONTACT INFO\n";
	std::cout << "First Name: " << contacts[index - 1].getFirstName() << '\n';
	std::cout << "Last Name: " << contacts[index - 1].getLastName() << '\n';
	std::cout << "Nickname: " << contacts[index - 1].getNickname() << '\n';
	std::cout << "Phone Number: " << contacts[index - 1].getPhoneNumber() << '\n';
	std::cout << "Darkest Secret: " << contacts[index - 1].getDarkestSecret() << '\n';
}
