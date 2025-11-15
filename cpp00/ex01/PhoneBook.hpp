/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:34:39 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/15 12:02:37 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>

#define MA_xSIZE 8

class PhoneBook
{
	private:
		Contact		_contacts[MA_xSIZE];
		int			_nextIndex;
		int			_validContacts;

		std::string	formatField(const std::string &str);

	public:
		PhoneBook();
		~PhoneBook();
		void		addContact(Contact newContact);
		bool		displayAll();
		bool		displayContact(int index);
};

#endif
