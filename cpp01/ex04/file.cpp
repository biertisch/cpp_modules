/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:33:53 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/11 16:55:42 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replacer.hpp"

std::string	getOutfileName(const std::string infileName)
{
	return infileName + ".replace";
}

bool	resetOutfile(std::ofstream& outfile, const std::string& outfileName)
{
	outfile.open(outfileName.c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Failed to open file\n";
		return false;
	}
	outfile << "";
	outfile.close();
	return true;
}

bool	openFiles(std::ifstream& infile, std::ofstream& outfile, const std::string& infileName, const std::string& outfileName)
{
	if (!resetOutfile(outfile, outfileName))
		return false;
	infile.open(infileName.c_str());
	outfile.open(outfileName.c_str(), std::ios::app);
	if (!infile.is_open() || !outfile.is_open())
	{
		std::cerr << "Failed to open file\n";
		return false;
	}
	return true;
}

void	closeFiles(std::ifstream& infile, std::ofstream& outfile)
{
	infile.close();
	outfile.close();
}
