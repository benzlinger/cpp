/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:42:57 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/20 18:06:22 by btenzlin         ###   ########.fr       */
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

	Cat				&operator=(const Cat &other);

	virtual void	makeSound(void) const;
	void			printBrainAddress(void);

private:

	Brain	*_brain;

};

#endif
