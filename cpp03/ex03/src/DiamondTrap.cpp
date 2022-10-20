/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:14:07 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/20 11:41:29 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_name = "diamond";
	ClapTrap::_name = _name + "_clap_name";
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap string constructor called" << std::endl;
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = other;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		ClapTrap::_name = this->_name + "_clap_name";
	}
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name: " << _name << ", My ClapTrap name: "
	<< ClapTrap::_name << std::endl;
}

std::string DiamondTrap::getName(void) const
{
	return (_name);
}

int DiamondTrap::getHp(void) const
{
	return (_hp);
}

int DiamondTrap::getEp(void) const
{
	return (_ep);
}

int DiamondTrap::getDmg(void) const
{
	return (_dmg);
}
