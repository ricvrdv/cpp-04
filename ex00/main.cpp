/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:07:30 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/07/23 17:50:29 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
    {
        // Correct Animal implementation
        std::cout << std::endl << "[ Correct Animal implementation ]" << std::endl << std::endl;
        const Animal*   meta = new Animal();
        const Animal*   j = new Dog();
        const Animal*   i = new Cat();
    
	    std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        j->makeSound();
        meta->makeSound();

        delete i;
        delete j;
        delete meta;
    }
    {
        // Wrong Animal implementation
	    std::cout << std::endl << "[ Wrong Animal implementation ]" << std::endl << std::endl;
        const WrongAnimal*	wrong = new WrongAnimal();
        const WrongAnimal*	w = new WrongCat();
    
        std::cout << w->getType() << " " << std::endl;
        wrong->makeSound();
        w->makeSound();
        std::cout << std::endl;

        delete wrong;
        delete w;
    }
    return (0);
}
