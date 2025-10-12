/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:34:19 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/12 12:14:04 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : firstName_(""), lastName_(""), nickname_(""),
	phoneNumber_(""), darkestSecret_("") {}

Contact::Contact(std::string name, std::string surname, std::string nickname,
	std::string number, std::string secret) : firstName_(name),
	lastName_(surname), nickname_(nickname), phoneNumber_(number),
	darkestSecret_(secret) {}

Contact::~Contact() {}

std::string Contact::getFirstName()
{
	return firstName_;
}

std::string Contact::getLastName()
{
	return lastName_;
}

std::string Contact::getNickname()
{
	return nickname_;
}

std::string Contact::getPhoneNumber()
{
	return phoneNumber_;
}

std::string Contact::getDarkestSecret()
{
	return darkestSecret_;
}
