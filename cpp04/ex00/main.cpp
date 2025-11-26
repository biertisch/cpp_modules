/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:57:06 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/26 13:07:11 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal* meta = new (std::nothrow) Animal();
	const Animal* cat = new (std::nothrow) Cat();
	const Animal* dog = new (std::nothrow) Dog();
	if (!meta || !cat || !dog)
	{
		std::cerr << "Memory allocation failed.\n";
		return 1;
	}

	std::cout << meta->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	cat->makeSound();
	dog->makeSound();
	meta->makeSound();

	delete meta;
	delete cat;
	delete dog;

	// Wrong classes examples
	const WrongAnimal* wrongMeta = new (std::nothrow) WrongAnimal();
	const WrongAnimal* wrongCat = new (std::nothrow) WrongCat();
	const WrongCat* wrongCat2 = new (std::nothrow) WrongCat();
	if (!wrongMeta || !wrongCat || !wrongCat2)
	{
		std::cerr << "Memory allocation failed.\n";
		return 1;
	}

	wrongMeta->makeSound();
	wrongCat->makeSound();
	wrongCat2->makeSound();

	delete wrongMeta;
	delete wrongCat;
	delete wrongCat2;

	return 0;
}
