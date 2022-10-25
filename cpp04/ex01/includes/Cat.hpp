/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:42:57 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/25 14:24:12 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {

public:

	Cat(void);
	Cat(const Cat &other);
	~Cat(void);

	Cat		&operator=(const Cat &other);

	void	makeSound(void) const;
	void	printBrainAddress(void);
	void	thinkOutLoud(void);

private:

	Brain	*_brain;

};

#endif
