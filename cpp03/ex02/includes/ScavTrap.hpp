/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:07:20 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/06 15:27:52 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {

public:

	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &other);
	~ScavTrap(void);

	ScavTrap	&operator=(const ScavTrap &other);

	void		attack(const std::string &target);
	void		guardGate(void);

private:

};

#endif
