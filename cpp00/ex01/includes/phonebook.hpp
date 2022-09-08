/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:45:53 by btenzlin          #+#    #+#             */
/*   Updated: 2022/09/08 16:06:54 by btenzlin         ###   ########.fr       */
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

	void	set_infos(void);
	void	show_contacts(void);

private:

	Contact	contacts[8];
	int		_index;
	int		_amount_contacts;
};

#endif
