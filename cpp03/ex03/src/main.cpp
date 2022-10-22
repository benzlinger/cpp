/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:45:09 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/20 12:33:49 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	bob("Bob");

	std::cout << "Name: " << bob.getName() << std::endl;
	std::cout << "Hp: " << bob.getHp() << std::endl;
	std::cout << "Ep: " << bob.getEp() << std::endl;
	std::cout << "Dmg: " << bob.getDmg() << std::endl;
	bob.whoAmI();
	bob.attack("Mirko");
	return (0);
}
