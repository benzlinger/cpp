/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:21:01 by btenzlin          #+#    #+#             */
/*   Updated: 2022/09/08 16:43:00 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"
#include <iostream>

int	main(void)
{
	PhoneBook	phonebook;
	std::string	buf;

	while(buf.compare("EXIT"))
	{
		std::cout << "Please enter a command: ";
		getline(std::cin, buf);
		if (!buf.compare("ADD"))
			phonebook.set_infos();
		else if (!buf.compare("SEARCH"))
			phonebook.show_contacts();
		else if (buf.compare("EXIT") && buf.size())
			std::cout << "Invalid command: please enter \'ADD\', \'SEARCH\' or \'EXIT\'" << std::endl;
	}
	return (0);
}
