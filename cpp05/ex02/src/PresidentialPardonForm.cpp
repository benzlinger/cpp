/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:31:27 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/24 17:28:01 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :
	AForm("Presidential Pardon", 25, 5)
{
	std::cout << "PPF default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	AForm("Presidential Pardon", 25, 5), _target(target)
{
	std::cout << "PPF string constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
{
	std::cout << "PPF copy constructor called" << std::endl;
	*this = other;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PPF destructor called" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	(void)other;
	std::cout << "PPF copy assignment operator called" << std::endl;
	return (*this);
}

void					PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	try {
		checkRequirements(executor);
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	} catch (std::exception &e) {
			std::cout << "Exception caught: " << e.what() << std::endl;
	}
}

std::string				PresidentialPardonForm::getTarget(void) const
{
	return (_target);
}
