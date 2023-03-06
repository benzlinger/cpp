/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:20:00 by btenzlin          #+#    #+#             */
/*   Updated: 2023/03/02 18:22:13 by btenzlin         ###   ########.fr       */
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
	return (0);
}
