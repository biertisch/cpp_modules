/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:34:16 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/08 18:52:06 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMON_HPP
#define COMMON_HPP

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

std::string	promptInfo(std::string description);
int			promptIndex();
void		promptContactInfo(std::string &name, std::string &surname,
				std::string &nickname, std::string &number, std::string &secret);
std::string	promptOption();
void		findContact(PhoneBook &phonebook);
void		saveNewContact(PhoneBook &phonebook);
void		displayOptions();

#endif