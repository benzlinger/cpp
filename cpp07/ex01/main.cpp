/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:58:07 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/28 12:12:42 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	int			intArr[5] = { 1, 2, 3, 4, 5 };

	std::cout << "Testing with int:" << std::endl;
	iter(intArr, 5, printElement);
	std::cout << std::endl;

	std::string	stringArr[2] = { "Hello World!", "42" };

	std::cout << "Testing with string:" << std::endl;
	iter(stringArr, 2, printElement);
	std::cout << std::endl;

	char		charArr[5] = { 'a', 'b', 'c', 'd', 'e' };

	std::cout << "Testing with char:" << std::endl;
	iter(charArr, 5, printElement);
	std::cout << std::endl;

	return (0);
}
