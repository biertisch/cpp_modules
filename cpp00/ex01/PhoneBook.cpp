/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:34:37 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/15 12:02:37 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _nextIndex(0), _validContacts(0) {}

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact(Contact newContact)
{
	_contacts[_nextIndex] = newContact;
	_nextIndex = (_nextIndex + 1) % MA_xSIZE;
	if (_validContacts < MA_xSIZE)
		_validContacts++;
}

std::string	PhoneBook::formatField(const std::string &str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

bool PhoneBook::displayAll()
{
	if (!_validContacts)
	{
		std::cout << "No contacts." << '\n';
		return false;
	}

	const std::string title = "CONTACTS";
	int padding = (65 - title.length()) / 2;
	std::cout << '\n' << std::setfill(' ') << std::setw(padding) << title << '\n';

	std::cout << std::right;
	for (int i = 1; i <= _validContacts; i++)
	{
		std::cout << std::setfill(' ') << std::setw(10) << i << " | "
			<< std::setw(10) << PhoneBook::formatField(_contacts[i - 1].getFirstName()) << " | "
			<< std::setw(10) << PhoneBook::formatField(_contacts[i - 1].getLastName()) << " | "
			<< std::setw(10) << PhoneBook::formatField(_contacts[i - 1].getNickname()) << '\n';
	}

	std::cout << '\n';
	return true;
}

bool PhoneBook::displayContact(int index)
{
	if (index < 1 || index > _validContacts)
	{
		std::cout << "Invalid index." << '\n';
		return false;
	}
	std::cout << "\nCONTACT INFO\n";
	std::cout << "First Name: " << _contacts[index - 1].getFirstName() << '\n';
	std::cout << "Last Name: " << _contacts[index - 1].getLastName() << '\n';
	std::cout << "Nickname: " << _contacts[index - 1].getNickname() << '\n';
	std::cout << "Phone Number: " << _contacts[index - 1].getPhoneNumber() << '\n';
	std::cout << "Darkest Secret: " << _contacts[index - 1].getDarkestSecret() << '\n';
	return true;
}
