/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:13:25 by btenzlin          #+#    #+#             */
/*   Updated: 2022/09/27 14:14:20 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl has been summoned. [constructor]" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl left in anger. [destructor]" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << DEBUG << std::endl;
}

void	Harl::info(void)
{
	std::cout << INFO << std::endl;
}

void	Harl::warning(void)
{
	std::cout << WARNING << std::endl;
}

void	Harl::error(void)
{
	std::cout << ERROR << std::endl;
}

void	Harl::complain(std:: string level)
{
	std::string		levels[4];
	int				i = 0;

	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
	while (level.compare(levels[i]) && i < 4)
		i++;
	switch (i) {
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default:
			std::cout << "Error: invalid input." << std::endl;
	}
}
