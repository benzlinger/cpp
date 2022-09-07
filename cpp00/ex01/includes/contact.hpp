/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:54:30 by btenzlin          #+#    #+#             */
/*   Updated: 2022/09/07 15:15:36 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class Contact {

public:

	Contact(void);
	~Contact(void);

	/* getter */
	std::string	get_first_name(void);
	std::string	get_last_name(void);
	std::string	get_nickname(void);
	std::string	get_phone_number(void);
	std::string	get_secret(void);

	/* setter */
	void		set_first_name(std::string first);
	void		set_last_name(std::string last);
	void		set_nickname(std::string nickname);
	void		set_phone_number(std::string number);
	void		set_secret(std::string secret);
	
private:

	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_secret;

};

#endif
