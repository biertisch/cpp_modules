/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:23:47 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/10 17:14:43 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called\n";

	for (int i = 0; i < 100; i++)
		ideas_[i] = "default idea";
}

Brain::Brain(const std::string& type)
{
	std::cout << "Brain parametrized constructor called\n";

	if (type == "Cat")
		for (int i = 0; i < 100; i++)
			ideas_[i] = "tuna";
	else if (type == "Dog")
		for (int i = 0; i < 100; i++)
			ideas_[i] = "bones";
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy constructor called\n";

	for (int i = 0; i < 100; i++)
		ideas_[i] = other.ideas_[i];
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain assignment operator called\n";

	if (this != &other)
		for (int i = 0; i < 100; i++)
			ideas_[i] = other.ideas_[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called\n";
}

std::string Brain::getIdea(int index) const
{
	return (ideas_[index]);
}

void Brain::setIdea(int index, const std::string& idea)
{
	ideas_[index] = idea;
}
