/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:34:39 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/06 15:34:40 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

# define MAX_SIZE 8

class PhoneBook
{
	private:
		Contact contacts[MAX_SIZE];
		int nextIndex;
		int validContacts;

	public:
		PhoneBook();
		void addContact(Contact newContact);
		Contact getContact(int index);
};

#endif
