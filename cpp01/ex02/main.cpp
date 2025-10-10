/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:16:36 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/10 17:59:37 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "Address of string:\t\t" << &string << '\n';
	std::cout << "Address held by pointer:\t" << stringPTR << '\n';
	std::cout << "Address of reference:\t\t" << &stringREF << "\n\n";

	std::cout << "Value of string:\t\t" << string << '\n';
	std::cout << "Value pointed to by pointer:\t" << *stringPTR << '\n';
	std::cout << "Value of reference:\t\t" << stringREF << '\n';
}
