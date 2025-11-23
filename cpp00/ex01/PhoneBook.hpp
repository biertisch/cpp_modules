/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:34:39 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/23 10:57:40 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

#define MAX_SIZE 8

class PhoneBook
{
	private:
		Contact _contacts[MAX_SIZE];
		int _nextIndex;
		int _validContacts;

		std::string formatField(const std::string& str) const;

	public:
		PhoneBook();
		~PhoneBook();

		void addContact(const Contact& newContact);
		bool displayAll() const;
		bool displayContact(int index) const;
};

#endif
