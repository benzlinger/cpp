/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:42:57 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/20 16:19:31 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
# define AANIMAL_H

#include <iostream>

class AAnimal {

public:

	AAnimal(void);
	AAnimal(const AAnimal &other);
	virtual ~AAnimal(void);

	AAnimal			&operator=(const AAnimal &other);

	virtual void	makeSound(void) const = 0;
	std::string		getType(void) const;

protected:

	std::string	_type;

};

#endif
