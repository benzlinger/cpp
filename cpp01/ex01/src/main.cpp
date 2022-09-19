/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:01:02 by btenzlin          #+#    #+#             */
/*   Updated: 2022/09/19 14:32:41 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie *horde = zombieHorde(8, "Tom");
	for (int i = 0; i < 8; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}
