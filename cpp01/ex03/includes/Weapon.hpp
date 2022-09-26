/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:10:44 by btenzlin          #+#    #+#             */
/*   Updated: 2022/09/19 15:22:19 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class	Weapon {

public:

	Weapon(std::string type);
	~Weapon(void);

	std::string	getType(void);
	void		setType(std::string type);

private:

	std::string	type;
};

#endif
