/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:59:28 by btenzlin          #+#    #+#             */
/*   Updated: 2022/09/19 13:25:23 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {

public:

	Zombie(void);
	~Zombie(void);

	void	announce(void);
	void	set_name(std::string name);

private:

	std::string	_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
