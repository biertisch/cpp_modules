/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:33:53 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/23 17:45:46 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replacer.hpp"

bool resetOutfile(std::ofstream& outfile, const std::string& outfileName)
{
	outfile.open(outfileName.c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Failed to open file.\n";
		return false;
	}
	outfile << "";
	outfile.close();
	return true;
}

bool openFiles(std::ifstream& infile, std::ofstream& outfile, const std::string& infileName, const std::string& outfileName)
{
	infile.open(infileName.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Failed to open infile.\n";
		return false;
	}
	if (infile.peek() == EOF)
	{
		std::cerr << "Nothing to replace: empty file.\n";
		return (false);
	}

	if (!resetOutfile(outfile, outfileName))
		return false;
	outfile.open(outfileName.c_str(), std::ios::app);
	if (!outfile.is_open())
	{
		std::cerr << "Failed to open outfile.\n";
		return false;
	}

	return true;
}

void closeFiles(std::ifstream& infile, std::ofstream& outfile)
{
	infile.close();
	outfile.close();
}
