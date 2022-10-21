/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:43:52 by jpfuhl            #+#    #+#             */
/*   Updated: 2022/10/21 09:35:40 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main(void)
{
	AAnimal	*cat = new Cat();
	AAnimal	*dog = new Dog();
	Cat		*cat2 = new Cat();
	// AAnimal	anim = new AAnimal();

	cat->makeSound();
	dog->makeSound();
	cat2->makeSound();

	delete cat;
	delete dog;
	delete cat2;

	return (0);
}
