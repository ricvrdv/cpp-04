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

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int	main()
{
	{
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

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << std::endl;

		IMateriaSource*	src = new MateriaSource();
		src->learnMateria( new Ice() );
		src->learnMateria( new Cure() );

		ICharacter* pkmn = new Character("Dratini");

		AMateria*	tmp;
		tmp = src->createMateria("ice");
		pkmn->equip(tmp);
		pkmn->unequip(0);
		tmp = src->createMateria("cure");
		pkmn->equip(tmp);
		tmp = src->createMateria("fire");
		pkmn->equip(tmp);

		ICharacter* target = new Character("Pikachu");

		pkmn->use(0, *target);
		pkmn->use(1, *target);
		pkmn->use(6, *target);

		delete target;
		delete pkmn;
		delete src;
	}
	return (0);
}
