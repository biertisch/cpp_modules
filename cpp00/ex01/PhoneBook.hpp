/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:34:39 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/09 14:32:31 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>

#define MAX_SIZE 8

class PhoneBook
{
	private:
		Contact		contacts[MAX_SIZE];
		int			nextIndex;
		int			validContacts;

		std::string	formatField(const std::string &str);

	public:
		PhoneBook();
		void		addContact(Contact newContact);
		bool		displayAll();
		bool		displayContact(int index);
};

#endif
