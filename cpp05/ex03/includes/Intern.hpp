/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:43:25 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/24 19:24:21 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

# include <iostream>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {

public:

	Intern(void);
	Intern(const Intern &other);
	~Intern(void);

	Intern	&operator=(const Intern &other);

	AForm	*makeForm(std::string name, std::string target);

	class IncorrectFormException : public std::exception {
		const char	*what() const throw() { return ("Form name incorrect"); }
	};

private:

	int		get_constructor_index(std::string name);

};

typedef	AForm	*(*constructorPtr)(const std::string);

#endif
