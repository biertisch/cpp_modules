/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:57:06 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/11 12:24:05 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	Animal *animal = new Animal();
	Animal *dog = new Dog();
	// AAnimal *abstractAnimal = new AAnimal();
	AAnimal *cat = new Cat();

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
