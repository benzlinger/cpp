/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:45:09 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/20 11:30:47 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int	main(void)
{
	ClapTrap	bob("Bob");
	ScavTrap	bert("Bert");
	FragTrap	bella("bella");

	bob.attack("Nobody");
	bert.attack("Somebody");
	bob.takeDamage(10);
	bert.takeDamage(10);
	bert.beRepaired(150);
	bert.takeDamage(100);
	bella.takeDamage(25);
	bob.attack("Mirko");
	bert.guardGate();
	bella.highFivesGuys();
	bella.takeDamage(75);
	bella.highFivesGuys();
}
