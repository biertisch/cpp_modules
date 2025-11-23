/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:34:19 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/23 10:58:25 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
	: _firstName(""), _lastName(""), _nickname(""),
	_phoneNumber(""), _darkestSecret("") {}

Contact::Contact(const std::string& name, const std::string& surname,
	const std::string& nickname, const std::string& number, const std::string& secret)
	: _firstName(name), _lastName(surname), _nickname(nickname),
	_phoneNumber(number), _darkestSecret(secret) {}

Contact::~Contact() {}

std::string Contact::getFirstName() const
{
	return _firstName;
}

std::string Contact::getLastName() const
{
	return _lastName;
}

std::string Contact::getNickname() const
{
	return _nickname;
}

std::string Contact::getPhoneNumber() const
{
	return _phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
	return _darkestSecret;
}
