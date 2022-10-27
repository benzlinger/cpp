/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:38:13 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/27 15:08:51 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serialize.hpp"

Serialize::Serialize(void)
{
	std::cout << "Serialize default constructor called" << std::endl;
}

Serialize::Serialize(const Serialize &other)
{
	std::cout << "Serialize copy constructor called" << std::endl;
	*this = other;
}

Serialize::~Serialize(void)
{
	std::cout << "Serialize destructor called" << std::endl;
}

Serialize	&Serialize::operator=(const Serialize &other)
{
	(void)other;
	std::cout << "Serialize copy assignment operator called" << std::endl;
	return (*this);
}

uintptr_t	Serialize::serialize(Data *ptr)
{
	std::cout << "Serializing..." << std::endl;
	return (reinterpret_cast<std::uintptr_t>(ptr));
}

Data	*Serialize::deserialize(uintptr_t raw)
{
	std::cout << "Deserializing..." << std::endl;
	return (reinterpret_cast<Data *>(raw));
}
