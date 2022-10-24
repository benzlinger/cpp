/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:34:18 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/24 10:28:31 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

Form::Form(void)
: _name("Default"), _isSigned(false), _signGrade(50), _execGrade(25)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade)
: _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "Form constructor called" << std::endl;
	try {
		if (_signGrade < 1 || _execGrade < 1)
			throw GradeTooHighException();
		else if (_signGrade > 150 || _execGrade > 150)
			throw GradeTooLowException();
	} catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}

Form::Form(const Form &other) : _name(other.getName()), _isSigned(other.getIsSigned())
, _signGrade(other.getSignGrade()), _execGrade(other.getExecGrade())
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form(void)
{
	std::cout << "Form destructor called" << std::endl;
}

Form		&Form::operator=(const Form &other)
{
	(void)other;
	std::cout << "Form copy assignment operator called" << std::endl;
	return (*this);
}

void		Form::beSigned(Bureaucrat &bureau)
{
	try {
		if (this->getIsSigned())
			throw FormAlreadySignedException();
		if (bureau.getGrade() > this->getSignGrade())
			throw GradeTooLowException();
		std::cout << bureau.getName() << " just signed the form: "
		<< this->getName() << std::endl;
		this->_isSigned = true;
	} catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	
}

std::string	Form::getName(void) const
{
	return (_name);
}

bool		Form::getIsSigned(void) const
{
	return (_isSigned);
}

int			Form::getSignGrade(void) const
{
	return (_signGrade);
}

int			Form::getExecGrade(void) const
{
	return (_execGrade);
}

std::ostream	&operator<<(std::ostream &out, const Form &form)
{
	out << "Name:                      " << form.getName() << "." << std::endl;
	if (form.getIsSigned())
		out << "Form signed:               " << "Yes." << std::endl;
	else
		out << "Form signed:               " << "No." << std::endl;
	out << "Grade required to sign:    " << form.getSignGrade() << "." << std::endl;
	out << "Grade required to execute: " << form.getExecGrade() << "." << std::endl;
	return (out);
}
