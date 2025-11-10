/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:57:06 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/10 17:30:55 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void validateCopy()
{
	std::cout << "\nValidating copy of animals:\n";

	Cat *first = new Cat();
	Cat *second = new Cat(*first);

	first->setIdea(0, "lasagna");
	std::cout << "first's idea: " << first->getIdea(0) << '\n';
	std::cout << "second's idea: " << second->getIdea(0) << '\n';

	Cat third;
	third = *second;
	second->setIdea(0, "mice");
	std::cout << "second's idea: " << second->getIdea(0) << '\n';
	std::cout << "third's idea: " << third.getIdea(0) << '\n';

	delete first;
	delete second;
}

void validateArray()
{
	std::cout << "Validating array of animals:\n";

	Animal* animals[4];
	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			animals[i] = new Cat;
		else
			animals[i] = new Dog;
	}

	std::cout << static_cast<Cat *>(animals[1])->getIdea(0) << '\n';
	std::cout << static_cast<Dog *>(animals[3])->getIdea(0) << '\n';

	for (int i = 0; i < 4; i++)
		delete animals[i];
}

int	main()
{
	validateArray();
	validateCopy();
	return 0;
}
