/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:42:57 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/25 14:24:18 by btenzlin         ###   ########.fr       */
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

	Dog		&operator=(const Dog &other);

	void	makeSound(void) const;
	void	printBrainAddress(void);
	void	thinkOutLoud(void);

private:

	Brain	*_brain;

};

#endif
