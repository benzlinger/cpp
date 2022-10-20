/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:42:57 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/20 16:21:30 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

#include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:

	WrongCat(void);
	WrongCat(const WrongCat &other);
	~WrongCat(void);

	WrongCat				&operator=(const WrongCat &other);

	void	makeSound(void) const;

private:

};

#endif
