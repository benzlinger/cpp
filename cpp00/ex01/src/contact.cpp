/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:05:13 by btenzlin          #+#    #+#             */
/*   Updated: 2022/09/07 17:40:42 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/contact.hpp"

Contact::Contact(void){}
Contact::~Contact(void){}

std::string	Contact::get_first_name(void)
{
	return (this->_first_name);
}

std::string	Contact::get_last_name(void)
{
	return (this->_last_name);
}

std::string	Contact::get_nickname(void)
{
	return (this->_nickname);
}

std::string	Contact::get_phone_number(void)
{
	return (this->_phone_number);
}

std::string	Contact::get_secret(void)
{
	return (this->_secret);
}

void	Contact::set_first_name(std::string first)
{
	this->_first_name = first;
}

void	Contact::set_last_name(std::string last)
{
	this->_last_name = last;
}

void	Contact::set_nickname(std::string nickname)
{
	this->_nickname = nickname;
}

void	Contact::set_phone_number(std::string number)
{
	this->_phone_number = number;
}

void	Contact::set_secret(std::string secret)
{
	this->_secret = secret;
}
