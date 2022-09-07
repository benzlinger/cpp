/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:58:52 by btenzlin          #+#    #+#             */
/*   Updated: 2022/09/07 17:52:19 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"
#include "../includes/contact.hpp"

PhoneBook::PhoneBook(void) : _index(0) {}
PhoneBook::~PhoneBook(void){}

std::string	get_info(std::string prompt)
{
	std::string	buf;

	while (buf.size() == 0)
	{
		std::cout << prompt;
		getline(std::cin, buf);
	}
	return (buf);
}

void		PhoneBook::set_infos()
{
	this->contacts[this->_index].set_first_name(get_info("Enter first name: "));
	this->contacts[this->_index].set_last_name(get_info("Enter last name: "));
	this->contacts[this->_index].set_nickname(get_info("Enter nickname: "));
	this->contacts[this->_index].set_phone_number(get_info("Enter phone number: "));
	this->contacts[this->_index].set_secret(get_info("Enter darkest secret: "));
	this->_index++;
	if (this->_index == 8)
		this->_index = 0;
}
