/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:02:11 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/06 15:30:50 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_hp = 100;
	this->_ep = 50;
	this->_dmg = 20;
	this->_max_hp = 100;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_ep = 50;
	this->_dmg = 20;
	this->_max_hp = 100;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	*this = other;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
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

void	ScavTrap::attack(const std::string &target)
{
	if (_ep > 0 && _hp > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target
		<< ", causing " << _dmg << " points of damage!" << std::endl;
		_ep--;
	}
	else if (_hp > 0)
	{
		std::cout << "ScavTrap " << _name
		<< " has no more energy points to attack." << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << _name
		<< " has no more hit points to attack." << std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	if (_ep > 0 && _hp > 0)
	{
		std::cout << "ScavTrap " << _name
		<< " is now guarding the gate." << std::endl;
		_ep--;
	}
	else if (_hp > 0)
	{
		std::cout << "ClapTrap " << _name
		<< " has no more energy points to attack." << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name
		<< " has no more hit points to attack." << std::endl;
	}
}
