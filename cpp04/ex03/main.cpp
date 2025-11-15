/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:15:01 by beatde-a          #+#    #+#             */
/*   Updated: 2025/11/15 13:10:41 by beatde-a         ###   ########.fr       */
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
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "\n-----------NO SPACE TO LEARN-----------\n";
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());
	src->learnMateria(new Ice());

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
