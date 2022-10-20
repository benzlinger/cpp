/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:45:09 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/20 11:08:04 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int	main(void)
{
	ClapTrap	bob("Bob");
	ScavTrap	bert("Bert");

	bob.attack("Nobody");
	bert.attack("Somebody");
	bert.guardGate();
	bob.takeDamage(10);
	bert.takeDamage(10);
	bert.beRepaired(150);
	bert.takeDamage(100);
	bob.attack("Mirko");
	bert.guardGate();
	return (0);
}
