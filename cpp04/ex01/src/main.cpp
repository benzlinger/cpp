/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:43:52 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/10/20 18:32:04 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main(void)
{
	{
		int size = 8;

		const Animal *animals[size];
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

	system("leaks brain");

	std::cout << std::endl;
	{
		// Cat	cat;
		Dog	dog;
		{
			std::cout << std::endl;

			// Cat	cat2(cat);
			Dog	dog2(dog);

			std::cout << std::endl;

			// cat.printBrainAddress();
			// cat2.printBrainAddress();
			dog.printBrainAddress();
			dog2.printBrainAddress();

			std::cout << std::endl;
		}
		std::cout << std::endl;

		// cat.printBrainAddress();
		dog.printBrainAddress();

		std::cout << std::endl;
	}
	std::cout << std::endl;

	system("leaks brain");

	return (0);
}
