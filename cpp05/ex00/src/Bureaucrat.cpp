/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:21:34 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/22 12:54:04 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	_grade = grade;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other.getName())
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	_grade = other.getGrade();
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat		&Bureaucrat::operator=(const Bureaucrat &other)
{
	(void)other;
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	return (*this);
}

void			Bureaucrat::incrementGrade(void)
{
	if (_grade - 1 < 1)
		throw GradeTooHighException();
	std::cout << getName() << ", grade incrementet from: " << getGrade()
	<< " to: ";
	_grade--;
	std::cout << _grade << "." << std::endl;
}

void			Bureaucrat::decrementGrade(void)
{
	if (_grade + 1 > 150)
		throw GradeTooLowException();
	std::cout << getName() << ", grade decrementet from: " << getGrade()
	<< " to: ";
	_grade++;
	std::cout << _grade << "." << std::endl;
}

std::string		Bureaucrat::getName(void) const
{
	return (_name);
}

int				Bureaucrat::getGrade(void) const
{
	return (_grade);
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureau)
{
	out << bureau.getName() << ", bureaucrat grade: " << bureau.getGrade()  << ".";
	return (out);
}
