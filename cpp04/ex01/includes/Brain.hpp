/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:21:11 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/20 17:30:07 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class	Brain {

public:

	Brain(void);
	Brain(const Brain &other);
	~Brain(void);

	Brain	&operator=(const Brain &other);

private:

	std::string	_ideas[100];

};

#endif
