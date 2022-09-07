/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:54:30 by btenzlin          #+#    #+#             */
/*   Updated: 2022/09/07 14:08:20 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class Contact {

public:

	Contact(void);
	~Contact(void);

	void set_first_name(std::string first);
	std::string set_last_name(void);
	std::string set_nickname(void);
	std::string set_phone_number(void);
	std::string set_secret(void);

private:

	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _secret;

};

#endif
