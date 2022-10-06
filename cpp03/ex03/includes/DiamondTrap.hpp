/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:19:38 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/06 16:34:30 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap {

public:

	DiamondTrap(void);
	DiamondTrap(const DiamondTrap &other);
	~DiamondTrap(void);

	DiamondTrap	&operator=(const DiamondTrap &other);

private:

	std::string	_name;

};

#endif
