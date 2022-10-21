/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:42:57 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/20 18:07:21 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

public:

	Dog(void);
	Dog(const Dog &other);
	~Dog(void);

	Dog				&operator=(const Dog &other);

	virtual void	makeSound(void) const;
	void			printBrainAddress(void);

private:

	Brain	*_brain;

};

#endif
