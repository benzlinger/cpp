/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:26:02 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/31 15:08:48 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>

int	main(void)
{
	std::list<int>::iterator	it;
	std::list<int>				ints;
	std::vector<int>::iterator	it2;
	std::vector<int>	 		vec;

	std::cout << "List container: " << std::endl;
	for (int i = 0; i < 5; i++)
	{
		ints.push_back(i * 5);
		std::cout << "Added " << (i * 5) << " to list." << std::endl;
	}
	try {
		it = easyfind(ints, 2);
		std::cout << *it << std::endl;
	} catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	std::cout << std::endl << "Array container: " << std::endl;
	for (int i = 0; i < 5; i++)
	{
		vec.push_back(i * 2);
		std::cout << "Added " << (i * 2) << " to array." << std::endl;
	}
	}
	try {
		it2 = easyfind(vec, 2);
		std::cout << *it2 << std::endl;
	} catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	return (0);
}
