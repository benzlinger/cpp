/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:58:52 by btenzlin          #+#    #+#             */
/*   Updated: 2022/09/08 16:24:50 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"
#include "../includes/contact.hpp"

PhoneBook::PhoneBook(void) : _index(0), _amount_contacts(-1) {}
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

void		PhoneBook::set_infos(void)
{
	this->contacts[this->_index].set_first_name(get_info("Enter first name: "));
	this->contacts[this->_index].set_last_name(get_info("Enter last name: "));
	this->contacts[this->_index].set_nickname(get_info("Enter nickname: "));
	this->contacts[this->_index].set_phone_number(get_info("Enter phone number: "));
	this->contacts[this->_index].set_secret(get_info("Enter darkest secret: "));
	// std::cout << this->contacts[this->_index].get_phone_number() << std::endl;
	this->_index++;
	if (this->_index == 8)
		this->_index = 0;
	if (this->_amount_contacts <= 7)
		this->_amount_contacts++;
}

void	print_info(std::string info)
{
	std::cout << std::setw(10);
	if (info.size() > 10)
	{
		info = info.substr(0, 10);
		info = info.replace(9, 1, ".");
	}
	std::cout << info << "|";
}

void	PhoneBook::show_contacts(void)
{
	for (int i = 0; i <= this->_amount_contacts; i++)
	{
		std::cout << "|";
		print_info(std::to_string(i));
		print_info(this->contacts[i].get_first_name());
		print_info(this->contacts[i].get_last_name());
		print_info(this->contacts[i].get_nickname());
		std::cout << std::endl;
	}
}
