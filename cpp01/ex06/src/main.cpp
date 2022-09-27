/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:13:00 by btenzlin          #+#    #+#             */
/*   Updated: 2022/09/27 14:12:30 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int	main(int argc, char **argv)
{
	std::string	levels[4];
	int			i = 0;

	if (argc != 2)
		std::cout << "Error: invalid number of arguments." << std::endl;
	else
	{
		Harl	harl;
		harl.complain(argv[1]);
	}
	return (0);
}
