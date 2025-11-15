/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:23:47 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/15 12:05:00 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called\n";

	for (int i = 0; i < 100; i++)
		_ideas[i] = "default idea";
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
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called\n";
}

std::string Brain::getIdea(int index) const
{
	return (_ideas[index]);
}

void Brain::setIdea(int index, const std::string& idea)
{
	_ideas[index] = idea;
}
