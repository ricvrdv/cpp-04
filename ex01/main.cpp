/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:24:03 by rjesus-d          #+#    #+#             */
/*   Updated: 2025/08/02 15:24:05 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
    {
        std::cout << "[ Basic test ]" << std::endl;
        const Animal*   dog = new Dog();
        const Animal*   cat = new Cat();

        std::cout << std::endl;
        dog->makeSound();
        cat->makeSound();
        std::cout << dog->getType() << std::endl;
        std::cout << cat->getType() << std::endl << std::endl;

        delete dog;
        delete cat;
    }
    {
        std::cout << std::endl << "[ Array of Animals ]" << std::endl;
        int const  size = 4;
        Animal* animals[size];

        for (int i = 0; i < size / 2; i++)
        {
            std::cout << i << std::endl;
            animals[i] = new Dog();
        }
        for (int i = size / 2; i < size; i++)
        {
            std::cout << i << std::endl;
            animals[i] = new Cat();
        }
        std::cout << std::endl;
        for (int i = 0; i < size; i++)
        {
            std::cout << i << " ";
            animals[i]->makeSound();
        }
        std::cout << std::endl;
		for (int i = 0; i < size; i++)
			delete animals[i];
    }
	{
		std::cout << std::endl << "[ Deep copy test ]" << std::endl;
		Cat	original;
		original.setIdea(0, "Sleep...");
		Cat	copy = original;
		std::cout << std::endl << "Original idea: " << original.getIdea(0) << std::endl;
		std::cout << "Copy idea: " << copy.getIdea(0) << std::endl;
		
		original.setIdea(0, "No thoughts, just meow");
		std::cout << "Modified original idea: " << original.getIdea(0) << std::endl;
		std::cout << "Copy idea: " << copy.getIdea(0) << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << std::endl << "Press ENTER for some overthinking" << std::endl;
		std::cin.get();

		std::cout << "[ Overthinking test ]" << std::endl;
		Dog	dog;

		std::cout << std::endl;
		for (int i = 0; i < 100; i++)
		{
			if (i % 2 == 0)
				dog.setIdea(i, "~ Did someone say walk?! ~");
			else
				dog.setIdea(i, "~ Nom hooman's shoe ~");
		}
		for (int i = 0; i < 100; i++)
			std::cout << dog.getIdea(i) << std::endl;
		std::cout << std::endl;
	}
    return (0);
}
