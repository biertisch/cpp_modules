/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 15:00:59 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/24 15:12:42 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

void processLine(std::string& line, const std::string& s1,
		const std::string& s2)
{
	size_t pos = line.find(s1);
	while (pos != std::string::npos)
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
		pos = line.find(s1, pos + 1);
	}
}

int processText(std::ifstream& infile, std::ofstream& outfile,
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
		std::cerr << "Failed to read file.\n";
		return 1;
	}

	return 0;
}

bool validateOutfile(std::ofstream& outfile)
{
	if (!outfile.is_open())
	{
		std::cerr << "Failed to open outfile.\n";
		return false;
	}
	return true;
}

bool validateInfile(std::ifstream& infile)
{
	if (!infile.is_open())
	{
		std::cerr << "Failed to open infile.\n";
		return false;
	}
	if (infile.peek() == EOF)
	{
		std::cerr << "Nothing to replace: empty file.\n";
		return false;
	}
	return true;
}

int replace(char **argv)
{
	if (!argv[2][0])
	{
		std::cerr << "Nothing to replace: empty argument.\n";
		return 1;
	}

	std::ifstream infile(argv[1]);
	if (!validateInfile(infile))
		return 1;
		
	std::string outfileName = argv[1];
	outfileName += ".replace";
	std::ofstream outfile(outfileName.c_str());
	if (!validateOutfile(outfile))
	{
		infile.close();
		return 1;
	}

	int ret = processText(infile, outfile, argv[2], argv[3]);
	infile.close();
	outfile.close();
	return ret;
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./replacer.out <filename> <string1> <string2>\n";
		return 1;
	}
	return (replace(argv));
}
