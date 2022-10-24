/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:31:27 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/24 18:00:30 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) :
	AForm("Robotomy Request", 72, 45)
{
	std::cout << "RRF default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	AForm("Robotomy Request", 72, 45), _target(target)
{
	std::cout << "RRF string constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
{
	std::cout << "RRF copy constructor called" << std::endl;
	*this = other;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RRF destructor called" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	(void)other;
	std::cout << "RRF copy assignment operator called" << std::endl;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	try {
		checkRequirements(executor);
		std::cout << "* DRILLING NOISES *" << std::endl;
		std::srand((unsigned int)std::time(NULL));
		if (std::rand() % 2 == 0)
			std::cout << _target << " has been robotomized successfully!" << std::endl;
		else
			std::cout << _target << "s robotomy failed!" << std::endl;
	} catch (std::exception &e) {
			std::cout << "Exception caught: " << e.what() << std::endl;
	}
}

std::string				RobotomyRequestForm::getTarget(void) const
{
	return (_target);
}
