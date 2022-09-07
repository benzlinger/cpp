/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:21:01 by btenzlin          #+#    #+#             */
/*   Updated: 2022/09/07 14:29:24 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>

int	main(void)
{
	PhoneBook	phonebook;
	Contact		contacts[8];
	int			index;
	std::string	buf;

	index = 0;
	while(buf.compare("EXIT"))
	{
		std::cin >> buf;
		if (!buf.compare("ADD"))
		{
			phonebook.set_infos(contacts[index]);
			index++;
			if (index == 8)
				index = 0;
		}
		else if (!buf.compare("SEARCH"))
			std::cout << "search" << std::endl;
		else
			std::cout << "Invalid command: please enter \'ADD\', \'SEARCH\' or \'EXIT\'" << std::endl;
	}
	return (0);
}
