/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:15:01 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/28 15:39:06 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"

int main()
{
	std::cout << "------------STANDARD EXAMPLE------------\n";
	IMateriaSource* src = new (std::nothrow) MateriaSource();
	if (!src)
	{
		std::cerr << "Memory allocation failed.\n";
		return 1;
	}
	
	src->learnMateria(new (std::nothrow) Ice());
	src->learnMateria(new (std::nothrow) Cure());

	ICharacter* me = new (std::nothrow) Character("me");
	if (!me)
	{
		std::cerr << "Memory allocation failed.\n";
		return 1;
	}

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new (std::nothrow) Character("bob");
	if (!bob)
	{
		std::cerr << "Memory allocation failed.\n";
		return 1;
	}

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "\n-----------NO SPACE TO LEARN-----------\n";
	src->learnMateria(new (std::nothrow) Ice());
	src->learnMateria(new (std::nothrow) Ice());
	src->learnMateria(new (std::nothrow) Ice());

	std::cout << "\n------WRONG TYPE & NOTHING TO EQUIP-----\n";
	tmp = src->createMateria("banana");
	me->equip(tmp);

	std::cout << "\n------------NO SPACE TO EQUIP-----------\n";
	for (int i = 0; i < 5; i++)
	{
		tmp = src->createMateria("ice");
		me->equip(tmp);
	}

	std::cout << "\n--------------UNEQUIPPING---------------\n";
	me->unequip(3);
	me->unequip(3);
	me->unequip(-1);
	me->unequip(10);

	std::cout << "\n--------------INVALID USES--------------\n";
	me->use(3, *bob);
	me->use(10, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}
