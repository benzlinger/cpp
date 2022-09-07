/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:45:53 by btenzlin          #+#    #+#             */
/*   Updated: 2022/09/07 14:15:08 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include "contact.hpp"

class PhoneBook {

public:

	PhoneBook(void);
	~PhoneBook(void);

	void	set_infos(Contact contact);
};

#endif
