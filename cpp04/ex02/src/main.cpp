/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:43:52 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/10/25 14:26:13 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main(void)
{
	{
		AAnimal	*cat = new Cat();
		std::cout << std::endl;
		AAnimal	*dog = new Dog();
		std::cout << std::endl;
		Cat		*cat2 = new Cat();
		std::cout << std::endl;
		Dog		*dog2 = new Dog();
		// AAnimal	anim;

		std::cout << std::endl;

		cat->makeSound();
		dog->makeSound();
		cat2->makeSound();
		dog2->makeSound();

		std::cout << std::endl;

		delete cat;
		std::cout << std::endl;
		delete dog;
		std::cout << std::endl;
		delete cat2;
		std::cout << std::endl;
		delete dog2;
	}
	std::cout << std::endl;
	/* EX00 - TESTS */
	{
		std::cout << "EX00 TESTS:" << std::endl;
		const AAnimal	*dog = new Dog();
		const AAnimal	*cat = new Cat();

		std::cout << std::endl << "TYPES: " << std::endl;
		std::cout << "Dog: " << dog->getType() << std::endl;
		std::cout << "Cat: " << cat->getType() << std::endl;

		std::cout << std::endl << "SOUNDS: " << std::endl;
		std::cout << "Dog: ";
		dog->makeSound();
		std::cout << "Cat: ";
		cat->makeSound();

		std::cout << std::endl;
		delete dog;
		delete cat;
	}
	/* EX01 - TESTS */
	{
		std::cout << "EX01 TESTS:" << std::endl;
		{
			int size = 8;

			const AAnimal *animals[size];
			std::cout << "CONSTRUCTORS:" << std::endl;
			for (int i = 0; i < size; i++)
			{
				std::cout << i << std::endl;
				if (i % 2 == 0)
					animals[i] = new Cat();
				else
					animals[i] = new Dog();
				std::cout << std::endl;
			}
			std::cout << std::endl;

			std::cout << "DESTRUCTORS:" << std::endl;
			for (int i = 0; i < size; i++)
			{
				std::cout << i << std::endl;
				delete animals[i];
				std::cout <<std::endl;
			}
		}
		std::cout << std::endl;
		{
			Dog	dog;
			{
				std::cout << std::endl;

				Dog	dog2(dog);

				std::cout << std::endl;

				dog.printBrainAddress();
				dog2.printBrainAddress();

				std::cout << std::endl;
			}
			std::cout << std::endl;

			dog.printBrainAddress();

			std::cout << std::endl;
		}
		std::cout << std::endl;
	}
	system("leaks abstract");
	return (0);
}
