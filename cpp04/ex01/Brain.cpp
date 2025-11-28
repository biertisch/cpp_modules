/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:23:47 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/28 14:24:49 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called\n";

	for (int i = 0; i < 100; i++)
		_ideas[i] = "eating";
}

Brain::Brain(const std::string& type)
{
	std::cout << "Brain parametrized constructor called\n";

	if (type == "Cat")
		for (int i = 0; i < 100; i++)
			_ideas[i] = "tuna";
	else if (type == "Dog")
		for (int i = 0; i < 100; i++)
			_ideas[i] = "bones";
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy constructor called\n";

	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain assignment operator called\n";

	if (this != &other)
		for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called\n";
}

std::string Brain::getIdea(int index) const
{
	if (index < 0 || index > 99)
	{
		std::cout << "Invalid index.\n";
		return ("");
	}

	return _ideas[index];
}

void Brain::setIdea(int index, const std::string& idea)
{
	if (index < 0 || index > 99)
	{
		std::cout << "Invalid index.\n";
		return;
	}

	_ideas[index] = idea;
}
