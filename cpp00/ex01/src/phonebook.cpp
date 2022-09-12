/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:58:52 by btenzlin          #+#    #+#             */
/*   Updated: 2022/09/12 18:00:33 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"
#include "../includes/contact.hpp"

PhoneBook::PhoneBook(void) : _index(0), _amount_contacts(0) {}
PhoneBook::~PhoneBook(void){}

std::string	PhoneBook::get_info(std::string prompt)
{
	std::string	buf;

	while (buf.empty())
	{
		std::cout << prompt;
		if (!getline(std::cin, buf))
			exit (0);
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
	this->_index++;
	if (this->_index == 8)
		this->_index = 0;
	if (this->_amount_contacts < 8)
		this->_amount_contacts++;
}

void	PhoneBook::print_info(std::string info)
{
	std::cout << std::setw(10);
	if (info.size() > 10)
	{
		info = info.substr(0, 10);
		info = info.replace(9, 1, ".");
	}
	std::cout << info << "|";
}

void	PhoneBook::show_contact_info(int index)
{
	if (index > 0 && index <= this->_amount_contacts)
	{
		std::cout << "Index:          " << std::to_string(index) << std::endl;
		std::cout << "First name:     " << this->contacts[index - 1].get_first_name() << std::endl;
		std::cout << "Last name:      " << this->contacts[index - 1].get_last_name() << std::endl;
		std::cout << "Nickname:       " << this->contacts[index - 1].get_nickname() << std::endl;
		std::cout << "Phone number :  " << this->contacts[index - 1].get_phone_number() << std::endl;
		std::cout << "Darkest secret: " << this->contacts[index - 1].get_secret() << std::endl;
	}
	else
		std::cout << "Invalid input or contact field empty. Please enter an index between 1 and " << this->_amount_contacts << std::endl;
}

void	PhoneBook::show_contacts(void)
{
	std::string	buf;
	int			input = 0;

	if (this->_amount_contacts == 0)
	{
		std::string       result = "                      ___\n                _,-\'\"\"   \"\"\"\"`--.\n             ,-'          __,,-- \\\n           ,'    __,--\"\"\"\"dF      )\n          /   .-\"Hb_,--\"\"dF      /\n        ,'       _Hb ___dF\"-._,-'\n      ,'      _,-\"\"\"\"   \"\"--..__\n     (     ,-\'                  `.\n      `._,\'     _   _             ;\n       ,\'     ,\' `-\'Hb-.___..._,-\'\n       \\    ,\'\"Hb.-\'HH`-.dHF\"\n        `--\'   \"Hb  HH  dF\"\n                \"Hb HH dF\n                 \"HbHHdF\n                  |HHHF\n                  |HHH|\n                  |HHH|\n                  |HHH|\n                  |HHH|\n                  dHHHb\n                .dFd|bHb.               o\n      o       .dHFdH|HbTHb.          o /\n\\  Y  |  \\__,dHHFdHH|HHhoHHb.___Ben   Y\n##########################################";
		std::cout << result << std::endl;
		std::cout << "Contact list empty. Add new contact using the \'ADD\' command." << std::endl;
	}
	else
	{
		std::cout << "|-------------------------------------------|" << std::endl;
		std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
		for (int i = 0; i < this->_amount_contacts; i++)
		{
			std::cout << "|";
			print_info(std::to_string(i + 1));
			print_info(this->contacts[i].get_first_name());
			print_info(this->contacts[i].get_last_name());
			print_info(this->contacts[i].get_nickname());
			std::cout << std::endl;
		}
		while (input < 1 || input > this->_amount_contacts)
		{
			std::cout << "Choose contact by entering corresponding index: ";
			if (!getline(std::cin, buf))
				exit (0);
			else if (buf.empty())
				continue ;
			input = atoi(buf.c_str());
			show_contact_info(input);
		}
	}
}
