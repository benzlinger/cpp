/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:24:20 by btenzlin          #+#    #+#             */
/*   Updated: 2023/05/12 22:21:02 by btenzlin         ###   ########.fr       */
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
	PmergeMe	sorter(argv, argc);

	clock_t	begin_vec;
	float	time_vec;
	clock_t	begin_deque;
	float	time_deque;

	begin_vec = clock();
	std::vector<int>	sorted_vec = sorter.sort_vec();
	time_vec = clock() - begin_vec;
	begin_deque = clock();
	std::deque<int>		sorted_deque = sorter.sort_deque();
	time_deque = clock() - begin_deque;

	std::vector<int>	original = sorter.get_original();
	std::cout << "Before:\t";
	for (std::vector<int>::iterator it = original.begin(); it != original.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "After:\t";
	for (std::vector<int>::iterator it = sorted_vec.begin(); it != sorted_vec.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << std::endl << "Time to process a range of " <<  sorted_vec.size() << " elements with std::vector\t: " << (time_vec / CLOCKS_PER_SEC * 1000000) << " us" << std::endl;
	std::cout << "Time to process a range of " << sorted_deque.size() << " elements with std::deque \t: " << (time_deque / CLOCKS_PER_SEC * 1000000) << " us" << std::endl;
	return (0);
}