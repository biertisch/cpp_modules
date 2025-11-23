/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 15:34:16 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/23 10:42:28 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

bool	promptInfo(const std::string description, std::string& input);
bool	promptIndex(int& index);
bool	promptContactInfo(std::string& name, std::string& surname,
			std::string& nickname, std::string& number, std::string& secret);
bool	promptOption(std::string& input);
bool	findContact(PhoneBook& phonebook);
bool	saveNewContact(PhoneBook& phonebook);
void	displayOptions();

#endif