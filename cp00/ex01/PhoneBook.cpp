/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:34:37 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/06 15:34:38 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : nextIndex(0), validContacts(0) {}

void PhoneBook::addContact(Contact newContact)
{
	contacts[nextIndex] = newContact;
	nextIndex = (nextIndex + 1) % MAX_SIZE;
	if (validContacts < MAX_SIZE)
		validContacts++;
}

Contact PhoneBook::getContact(int index)
{
	return contacts[index];
}
