/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:57:06 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/28 14:39:44 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	Animal *animal = new (std::nothrow) Animal();
	Animal *dog = new (std::nothrow) Dog();
	// AAnimal *abstractAnimal = new (std::nothrow) AAnimal();
	AAnimal *cat = new (std::nothrow) Cat();
	if (!animal || !dog || !cat)
	{
		std::cerr << "Memory allocation failed.\n";
		return 1;
	}

	std::cout << '\n';
	animal->makeSound();
	dog->makeSound();
	// abstractAnimal->makeSound();
	cat->makeSound();

	std::cout << '\n';
	delete animal;
	delete dog;
	// delete abstractAnimal;
	delete cat;

	return 0;
}
