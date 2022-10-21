/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:34:24 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/20 18:21:38 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	_type = other._type;
	_brain = new Brain();
	*_brain = *other._brain;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat	&Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_type = other._type;
		_brain = other._brain;
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
}

void	Cat::printBrainAddress(void)
{
	std::cout << "Address of Brain: " << &_brain << std::endl;
}
