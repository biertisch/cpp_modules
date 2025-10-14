/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:34:37 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/14 11:26:27 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : nextIndex_(0), validContacts_(0) {}

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact(Contact newContact)
{
	contacts_[nextIndex_] = newContact;
	nextIndex_ = (nextIndex_ + 1) % MAX_SIZE;
	if (validContacts_ < MAX_SIZE)
		validContacts_++;
}

std::string	PhoneBook::formatField(const std::string &str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

bool PhoneBook::displayAll()
{
	if (!validContacts_)
	{
		std::cout << "No contacts." << '\n';
		return false;
	}

	const std::string title = "CONTACTS";
	int padding = (65 - title.length()) / 2;
	std::cout << '\n' << std::setfill(' ') << std::setw(padding) << title << '\n';

	std::cout << std::right;
	for (int i = 1; i <= validContacts_; i++)
	{
		std::cout << std::setfill(' ') << std::setw(10) << i << " | "
			<< std::setw(10) << PhoneBook::formatField(contacts_[i - 1].getFirstName()) << " | "
			<< std::setw(10) << PhoneBook::formatField(contacts_[i - 1].getLastName()) << " | "
			<< std::setw(10) << PhoneBook::formatField(contacts_[i - 1].getNickname()) << '\n';
	}

	std::cout << '\n';
	return true;
}

bool PhoneBook::displayContact(int index)
{
	if (index < 1 || index > validContacts_)
	{
		std::cout << "Invalid index." << '\n';
		return false;
	}
	std::cout << "\nCONTACT INFO\n";
	std::cout << "First Name: " << contacts_[index - 1].getFirstName() << '\n';
	std::cout << "Last Name: " << contacts_[index - 1].getLastName() << '\n';
	std::cout << "Nickname: " << contacts_[index - 1].getNickname() << '\n';
	std::cout << "Phone Number: " << contacts_[index - 1].getPhoneNumber() << '\n';
	std::cout << "Darkest Secret: " << contacts_[index - 1].getDarkestSecret() << '\n';
	return true;
}
