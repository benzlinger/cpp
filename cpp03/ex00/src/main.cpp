/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:45:09 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/20 10:48:54 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int	main(void)
{
	ClapTrap	bob("Bob");
	ClapTrap	bert("Bert");

	bob.attack("Ben");
	bob.takeDamage(4);
	bob.beRepaired(10);
	bert.takeDamage(8);
	bert.beRepaired(2);
	bert.takeDamage(6);
	bert.attack("Bella");
	bob.attack("Bella");
	bob.takeDamage(20);
	bob.takeDamage(10);
	return (0);
}
