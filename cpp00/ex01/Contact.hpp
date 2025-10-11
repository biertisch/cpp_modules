/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:34:22 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/11 09:39:33 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact
{
	private:
		std::string	firstName_;
		std::string	lastName_;
		std::string	nickname_;
		std::string	phoneNumber_;
		std::string	darkestSecret_;

	public:
		Contact();
		Contact(std::string name, std::string surname, std::string nickname,
			std::string number, std::string secret);
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickname();
		std::string	getPhoneNumber();
		std::string	getDarkestSecret();
};

#endif
