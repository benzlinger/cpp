/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:43:52 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/10/24 20:51:26 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main(void)
{
	AAnimal	*cat = new Cat();
	std::cout << std::endl;
	AAnimal	*dog = new Dog();
	std::cout << std::endl;
	Cat		*cat2 = new Cat();
	std::cout << std::endl;
	Dog		*dog2 = new Dog();
	// AAnimal	anim = new AAnimal();

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

	return (0);
}
