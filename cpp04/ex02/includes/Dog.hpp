/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:42:57 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/25 10:47:36 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {

public:

	Dog(void);
	Dog(const Dog &other);
	~Dog(void);

	Dog		&operator=(const Dog &other);

	void	makeSound(void) const;
	void	printBrainAddress(void);

private:

	Brain	*_brain;

};

#endif
