/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:39:47 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/20 11:59:29 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
# include "ClapTrap.hpp"

class	FragTrap : public virtual ClapTrap {

public:

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap &other);
	~FragTrap(void);

	FragTrap	&operator=(const FragTrap &other);

	void		highFiveGuys(void);
	int			getEp(void) const;
	int			getDmg(void) const;

private:

};

#endif
