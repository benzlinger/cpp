/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:45:42 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/06 15:29:20 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <string>
# include <iostream>

class	ClapTrap {

public:

	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &other);
	~ClapTrap(void);

	ClapTrap	&operator=(ClapTrap const &other);

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

protected:

	std::string	_name;
	int			_hp;
	int			_ep;
	int			_dmg;
	int			_max_hp;

};

#endif
