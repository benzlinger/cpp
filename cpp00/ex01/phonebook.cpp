/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:58:52 by btenzlin          #+#    #+#             */
/*   Updated: 2022/09/07 14:19:20 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

PhoneBook::PhoneBook(void){}
PhoneBook::~PhoneBook(void){}

void	PhoneBook::set_infos(Contact contact)
{
	std::string	buf;

	std::cout << "Enter first name: ";
	std::cin >> buf;
	if (buf.length > 0)
		contact.set_first_name(buf);
}
