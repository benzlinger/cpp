/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:42:39 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/20 11:19:57 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_name = "Nobody";
	this->_hp = 100;
	this->_ep = 100;
	this->_dmg = 30;
	this->_max_hp = 100;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap string constructor called" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_ep = 100;
	this->_dmg = 30;
	this->_max_hp = 100;
}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = other;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hp = other._hp;
		this->_ep = other._ep;
		this->_dmg = other._dmg;
		this->_max_hp = other._max_hp;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	if (_ep > 0 && _hp > 0)
	{
		std::cout << "FragTrap " << _name
		<< " is high fiving somebody." << std::endl;
		_ep--;
	}
	else if (_hp > 0)
	{
		std::cout << "FragTrap " << _name
		<< " has no more energy points to high five." << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << _name
		<< " has no more hit points to high five." << std::endl;
	}
}
