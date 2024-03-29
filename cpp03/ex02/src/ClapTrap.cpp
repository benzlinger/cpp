/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:45:31 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/20 11:18:01 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("nobody"), _hp(10), _ep(10), _dmg(0), _max_hp(10)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _dmg(0), _max_hp(10)
{
	std::cout << "ClapTrap string constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &other)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
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

void	ClapTrap::attack(const std::string &target)
{
	if (_ep > 0 && _hp > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target
		<< ", causing " << _dmg << " points of damage!" << std::endl;
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

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp > 0)
	{
		std::cout << "ClapTrap " << _name << " took damage for "
		<< amount << " hit points" << std::endl;
	}
	_hp -= amount;
	if (_hp <= 0)
	{
		std::cout << "ClapTrap " << _name << " is dead." << std::endl;
		_hp = 0;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " is now at " << _hp
		<< " hit points " << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	int	i = 0;

	if (_ep > 0 && _hp > 0)
	{
		while (amount > 0 && _hp < _max_hp)
		{
			_hp++;
			amount--;
			i++;
		}
		std::cout << "ClapTrap " << _name << " was repaired for " << i
		<< " hit points and is now at " << _hp << " hit points." << std::endl;
		_ep--;
	}
	else if (_hp > 0)
	{
		std::cout << "ClapTrap " << _name
		<< " has no more energy points to be repaired." << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name
		<< " has no more hit points to be repaired." << std::endl;
	}
}
