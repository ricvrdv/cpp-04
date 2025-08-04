/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:34:37 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/08/02 15:34:38 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Thunder.hpp"
#include "Fire.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int	main()
{
	{
		std::cout << "[ SUBJECT TEST ]" << std::endl;
		IMateriaSource*	src = new MateriaSource();
		src->learnMateria( new Ice() );
		src->learnMateria( new Cure() );

		ICharacter* me = new Character("me");

		AMateria*	tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		std::cout << std::endl;
		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << std::endl << "[ MY TEST ]" << std::endl;

		IMateriaSource*	src = new MateriaSource();
		src->learnMateria( new Ice() );
		src->learnMateria( new Cure() );
		src->learnMateria( new Thunder() );
		src->learnMateria( new Fire() );

		ICharacter* pkmn = new Character("Ditto");

		AMateria*	tmp;
		tmp = src->createMateria("ice");
		pkmn->equip(tmp);
		tmp = src->createMateria("cure");
		pkmn->equip(tmp);
		tmp = src->createMateria("thunder");
		pkmn->equip(tmp);
		tmp = src->createMateria("fire");
		pkmn->equip(tmp);
		pkmn->equip(tmp);
		pkmn->unequip(0);
		tmp = src->createMateria("fire");
		pkmn->equip(tmp);

		ICharacter* target = new Character("Arbok");
		ICharacter* ally = new Character("Pikachu");
		
		std::cout << std::endl << "Let the battle begin..." << std::endl;
		pkmn->use(0, *target);
		pkmn->use(1, *ally);
		pkmn->use(2, *target);
		pkmn->use(3, *target);
		pkmn->use(9, *ally);

		delete ally;
		delete target;
		delete pkmn;
		delete src;
	}
	return (0);
}
