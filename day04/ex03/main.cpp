/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otiniako <otiniako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 16:50:09 by otiniako          #+#    #+#             */
/*   Updated: 2018/10/06 17:01:18 by otiniako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int 	main()
{
	IMateriaSource* src = new MateriaSource();
	AMateria* tmp;

	tmp = src->createMateria("ice");

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());

	ICharacter* zaz = new Character("zaz");
	ICharacter* bob = new Character("bob");

	std::cout << std::endl;
	tmp = src->createMateria("ice");
	zaz->equip(tmp);
	tmp = src->createMateria("cure");
	zaz->equip(tmp);
	zaz->equip(tmp);
	zaz->equip(tmp);
	zaz->equip(tmp);

	std::cout << std::endl;
	zaz->use(0, *bob);
	zaz->use(1, *bob);
	zaz->use(2, *bob);
	zaz->use(2, *bob);
	tmp = src->createMateria("ice");
	zaz->equip(tmp);
	zaz->use(0, *bob);

	std::cout << std::endl;
	zaz->unequip(3);
	zaz->unequip(2);

	delete bob;
	delete zaz;
	delete src;

	return 0;
}