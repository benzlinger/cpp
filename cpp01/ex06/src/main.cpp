/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:13:00 by btenzlin          #+#    #+#             */
/*   Updated: 2022/09/27 13:54:23 by btenzlin         ###   ########.fr       */
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
		levels[0] = "DEBUG";
		levels[1] = "INFO";
		levels[2] = "WARNING";
		levels[3] = "ERROR";
		while (std::string(argv[1]).compare(levels[i]) && i < 4)
			i++;
		switch (i) {
			case 0:
				harl.complain("debug");
			case 1:
				harl.complain("info");
			case 2:
				harl.complain("warning");
			case 3:
				harl.complain("error");
				break;
			default:
				std::cout << "Error: invalid input." << std::endl;
		}
	}
	return (0);
}
