/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:45:09 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/20 11:55:08 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	bob("Bob");
	DiamondTrap	bert;

	std::cout << "Name: " << bob.getName() << std::endl;
	std::cout << "Hp: " << bob.getHp() << std::endl;
	std::cout << "Ep: " << bob.getEp() << std::endl;
	std::cout << "Dmg: " << bob.getDmg() << std::endl;
	bob.whoAmI();
	bob.attack("Mirko");
	bob.takeDamage(50);
	bob.beRepaired(25);
	bob.guardGate();
	bob.highFiveGuys();
	bob.whoAmI();
	std::cout << "Name: " << bert.getName() << std::endl;
	std::cout << "Hp: " << bert.getHp() << std::endl;
	std::cout << "Ep: " << bert.getEp() << std::endl;
	std::cout << "Dmg: " << bert.getDmg() << std::endl;
	bert.whoAmI();
	return (0);
}
