/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:34:19 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/15 11:17:35 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : _firstName(""), _lastName(""), _nickname(""),
	_phoneNumber(""), _darkestSecret("") {}

Contact::Contact(std::string name, std::string surname, std::string nickname,
	std::string number, std::string secret) : _firstName(name),
	_lastName(surname), _nickname(nickname), _phoneNumber(number),
	_darkestSecret(secret) {}

Contact::~Contact() {}

std::string Contact::getFirstName()
{
	return _firstName;
}

std::string Contact::getLastName()
{
	return _lastName;
}

std::string Contact::getNickname()
{
	return _nickname;
}

std::string Contact::getPhoneNumber()
{
	return _phoneNumber;
}

std::string Contact::getDarkestSecret()
{
	return _darkestSecret;
}
