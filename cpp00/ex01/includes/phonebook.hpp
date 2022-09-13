/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:45:53 by btenzlin          #+#    #+#             */
/*   Updated: 2022/09/13 12:16:42 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include "contact.hpp"

class PhoneBook {

public:

	PhoneBook(void);
	~PhoneBook(void);

	void		set_infos(void);
	void		show_contacts(void);

private:

	Contact		_contacts[8];
	int			_index;
	int			_amount_contacts;

	std::string	get_info(std::string prompt);
	void		print_info(std::string info);
	void		show_contact_info(int index);
};

#endif
