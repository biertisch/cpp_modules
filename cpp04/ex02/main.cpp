/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:57:06 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/26 14:31:59 by beatde-a         ###   ########.fr       */
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

	animal->makeSound();
	dog->makeSound();
	// abstractAnimal->makeSound();
	cat->makeSound();

	delete animal;
	delete dog;
	// delete abstractAnimal;
	delete cat;

	return 0;
}
