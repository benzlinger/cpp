/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:20:02 by btenzlin          #+#    #+#             */
/*   Updated: 2022/09/26 12:22:20 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
# include "Weapon.hpp"

class	HumanA {

public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);

	void	attack(void);

private:

	std::string	_name;
	Weapon		&_weapon;

};

#endif
