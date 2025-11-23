/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 15:00:59 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/23 17:54:37 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replacer.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./replacer.out <filename> <string1> <string2>\n";
		return 1;
	}

	if (!argv[2][0])
	{
		std::cerr << "Nothing to replace: empty argument.\n";
		return 1;
	}

	std::string outfileName = argv[1];
	outfileName += ".replace";

	std::ifstream infile;
	std::ofstream outfile;
	if (!openFiles(infile, outfile, argv[1], outfileName))
		return 1;

	if (!processText(infile, outfile, argv[2], argv[3]))
	{
		closeFiles(infile, outfile);
		return 1;
	}

	closeFiles(infile, outfile);
	return 0;
}
