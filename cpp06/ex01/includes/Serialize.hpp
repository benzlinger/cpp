/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:37:09 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/27 15:46:40 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_H
# define SERIALIZE_H

# include <iostream>

typedef struct	Data {
	int			num;
	std::string	str;
}				Data;

class	Serialize {

public:

	Serialize(void);
	Serialize(const Serialize &other);
	~Serialize(void);

	Serialize	&operator=(const Serialize &other);


	uintptr_t	serialize(Data* ptr);
	Data*		deserialize(uintptr_t raw);
};

#endif
