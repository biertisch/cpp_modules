/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:57:06 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/28 14:31:13 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

bool validateCopy()
{
	std::cout << "\n***Validating copy of animals***\n";

	Cat *first = new (std::nothrow) Cat();
	Cat *second = new (std::nothrow) Cat(*first);
	if (!first || !second)
	{
		std::cerr << "Memory allocation failed.\n";
		return false;
	}

	std::cout << '\n';
	first->setIdea(0, "lasagna");
	std::cout << "first's idea: " << first->getIdea(0) << '\n';
	std::cout << "second's idea: " << second->getIdea(0) << '\n';

	std::cout << '\n';
	Cat third;
	third = *first;

	std::cout << '\n';
	first->setIdea(0, "mice");
	std::cout << "first's idea: " << first->getIdea(0) << '\n';
	std::cout << "third's idea: " << third.getIdea(0) << '\n';

	std::cout << '\n';
	{
		Cat tmp = third;
	}
	std::cout << "third's idea: " << third.getIdea(0) << '\n';

	std::cout << '\n';
	delete first;
	delete second;

	return true;
}

bool validateArray()
{
	std::cout << "***Validating array of animals***\n";

	int size = 4;
	Animal* animals[size];
	for (int i = 0; i < size; i++)
	{
		if (i < size / 2)
			animals[i] = new (std::nothrow) Cat;
		else
			animals[i] = new (std::nothrow) Dog;
		if (!animals[i])
		{
			std::cerr << "Memory allocation failed.\n";
			return false;
		}
	}

	std::cout << '\n';
	std::cout << static_cast<Cat*>(animals[0])->getIdea(0) << '\n';
	std::cout << static_cast<Cat*>(animals[1])->getIdea(0) << '\n';
	std::cout << static_cast<Dog*>(animals[2])->getIdea(0) << '\n';
	std::cout << static_cast<Dog*>(animals[3])->getIdea(0) << '\n';

	std::cout << '\n';
	for (int i = 0; i < size; i++)
		delete animals[i];

	return true;
}

int	main()
{
	if (!validateArray())
		return 1;
	if (!validateCopy())
		return 1;
	return 0;
}
