/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 18:20:27 by beatde-a          #+#    #+#             */
/*   Updated: 2025/10/11 19:05:14 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	loopThroughComplaints(Harl& h, int index, const std::string* levels)
{
	for (int i = index; i < N; i++)
	{
		h.complain(levels[i]);
		if (i < N - 1)
			std::cout << '\n';
	}
}

void	complaintSwitch(Harl& h, int index, const std::string* levels)
{
	switch(index)
	{
		case 0: case 1:	case 2:	case 3:
			loopThroughComplaints(h, index, levels);
			break;
		default:
			h.complain("foo");
			break;
	}
}

int	getIndex(const std::string& level, const std::string* levels)
{
	for (int i = 0; i < N; i++)
		if (level == levels[i])
			return i;
	return -1;
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./harl <complaint_level>\n";
		return 1;
	}
	Harl wonderfulPerson;
	std::string* levels = wonderfulPerson.getLevels();
	int	index = getIndex(argv[1], levels);
	complaintSwitch(wonderfulPerson, index, levels);
	return 0;
}
