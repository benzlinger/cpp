/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:24:20 by btenzlin          #+#    #+#             */
/*   Updated: 2023/03/07 18:35:43 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

static bool	is_number(std::string s)
{
	for (std::string::iterator it = s.begin(); it != s.end(); it++)	
		if (!isdigit(*it))
			return (false);
	if ((atol(s.c_str()) > INT_MAX) || !s.size())
		return (false);
	return (true);
}

int			main(int argc, char **argv)
{
	if (argc <= 2)
	{
		std::cerr << "Error: enter at least 2 arguments." << std::endl;
		return (1);
	}
	for (int i = 1; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			std::cerr << "Error: only positive integers accepted." << std::endl;
			return (1);
		}
	}
	PmergeMe	test(argv, argc);
	return (0);
}