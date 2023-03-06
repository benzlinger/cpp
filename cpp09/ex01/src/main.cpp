/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:20:00 by btenzlin          #+#    #+#             */
/*   Updated: 2023/03/06 16:32:51 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

static void		exit_msg(std::string msg)
{
	std::cerr << "Error: " << msg << std::endl;
	exit(0);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		exit_msg("Invalid arguments. [usage: ./RPN \"math expression\"]");
	try {
		RPN	jan(argv[1]);
		std::cout << jan.calculate() << std::endl;
	} catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	return (0);
}
