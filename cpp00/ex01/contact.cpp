/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 16:05:13 by btenzlin          #+#    #+#             */
/*   Updated: 2022/09/07 14:07:51 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void){}
Contact::~Contact(void){}

void	Contact::set_first_name(std::string first)
{
	this->_first_name = first;
}
