/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:12:56 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/04 17:16:38 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>

# define DEBUG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!"
# define INFO "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
# define WARNING "I think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month."
# define ERROR "This is unacceptable! I want to speak to the manager now."

class	Harl {

public:

	Harl(void);
	~Harl(void);

	void	complain(std::string level);

private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

};

typedef	void(Harl::*levelfunction)(void);

#endif
