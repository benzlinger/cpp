/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:44:48 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/25 19:02:08 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

static AForm	*pardon(std::string target)
{
	return (new PresidentialPardonForm(target));
}

static AForm	*robotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

static AForm	*shrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Intern::Intern(void)
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &other)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = other;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern	&Intern::operator=(const Intern &other)
{
	(void)other;
	std::cout << "Intern copy assignment operator called" << std::endl;
	return (*this);
}

int		Intern::get_constructor_index(std::string name)
{
	std::string	names[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	for (int i = 0; i < 3; i++)
	{
		if (name == names[i])
			return (i);
	}
	throw IncorrectFormException();
	return (-1);
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	int	i = 0;
	functionPtr	forms[3] = {&pardon, &robotomy, &shrubbery};
	AForm	*form = NULL;

	try {
		i = get_constructor_index(name);
		if (i != -1)
		{
			form = forms[i](target);
			std::cout << "Intern creates " << name << std::endl;
		}
	} catch (std::exception &e) {
		std::cout << "Intern couldn't create " << name << std::endl;
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	return (form);
}

const char* Intern::IncorrectFormException::what() const throw()
{
	return ("Form name incorrect");
}
