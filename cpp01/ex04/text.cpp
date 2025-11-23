/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:34:07 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/23 17:57:33 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replacer.hpp"

void replace(std::string& dest, size_t pos, size_t len,
		const std::string& s)
{
	dest.erase(pos, len);
	dest.insert(pos, s);
}

void processLine(std::string& line, const std::string& s1,
		const std::string& s2)
{
	size_t pos = line.find(s1);
	while (pos != std::string::npos)
	{
		replace(line, pos, s1.length(), s2);
		pos = line.find(s1, pos + 1);
	}
}

bool processText(std::ifstream& infile, std::ofstream& outfile,
		const std::string& s1, const std::string& s2)
{
	std::string	line;
	while (std::getline(infile, line))
	{
		processLine(line, s1, s2);
		outfile << line << '\n';
	}

	if (std::cin.fail() || std::cin.bad())
	{
		std::cerr << "Failed to read file\n";
		return false;
	}

	return true;
}
