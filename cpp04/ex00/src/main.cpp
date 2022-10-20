/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:56:06 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/20 16:09:28 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"

int	main(void)
{
	{
		std::cout << std::endl << "CORRECT TESTS:" << std::endl;
		const Animal	*animal = new Animal();
		const Animal	*dog = new Dog();
		const Animal	*cat = new Cat();

		std::cout << std::endl << "TYPES: " << std::endl;
		std::cout << "Animal: " << animal->getType() << std::endl;
		std::cout << "Dog: " << dog->getType() << std::endl;
		std::cout << "Cat: " << cat->getType() << std::endl;

		std::cout << std::endl << "SOUNDS: " << std::endl;
		std::cout << "Animal: ";
		animal->makeSound();
		std::cout << "Dog: ";
		dog->makeSound();
		std::cout << "Cat: ";
		cat->makeSound();
	}


	{
		std::cout << std::endl << "WRONG TESTS:" << std::endl;
		const	WrongAnimal	*wronganimal = new WrongAnimal();
		const	WrongAnimal	*wrongcat = new WrongCat();

		std::cout << std::endl << "TYPES: " << std::endl;
		std::cout << "Wrong animal: " << wronganimal->getType() << " " << std::endl;
		std::cout << "Wrong cat: " << wrongcat->getType() << " " << std::endl;

		std::cout << std::endl << "SOUNDS: " << std::endl;
		std::cout << "Wrong animal: ";
		wronganimal->makeSound();
		std::cout << "Wrong cat: ";
		wrongcat->makeSound();
	}

	return (0);
}
