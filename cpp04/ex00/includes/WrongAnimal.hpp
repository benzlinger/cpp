/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:42:57 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/20 15:49:45 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>

class WrongAnimal {

public:

	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &other);
	~WrongAnimal(void);

	WrongAnimal			&operator=(const WrongAnimal &other);

	void			makeSound(void) const;
	std::string		getType(void) const;

protected:

	std::string	_type;

};

#endif
