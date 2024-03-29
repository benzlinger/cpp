/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:34:18 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/24 10:28:31 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"

AForm::AForm(void)
: _name("Default"), _isSigned(false), _isExecuted(false), _signGrade(50), _execGrade(25)
{
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(std::string name, int signGrade, int execGrade)
: _name(name), _isSigned(false), _isExecuted(false), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "AForm constructor called" << std::endl;
	try {
		if (_signGrade < 1 || _execGrade < 1)
			throw GradeTooHighException();
		else if (_signGrade > 150 || _execGrade > 150)
			throw GradeTooLowException();
	} catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}

AForm::AForm(const AForm &other) : _name(other.getName()), _isSigned(other.getIsSigned())
, _isExecuted(other.getIsExecuted()), _signGrade(other.getSignGrade()), _execGrade(other.getExecGrade())
{
	std::cout << "AForm copy constructor called" << std::endl;
}

AForm::~AForm(void)
{
	std::cout << "AForm destructor called" << std::endl;
}

AForm		&AForm::operator=(const AForm &other)
{
	(void)other;
	std::cout << "AForm copy assignment operator called" << std::endl;
	return (*this);
}

void		AForm::beSigned(Bureaucrat &bureau)
{
	try {
		check_grades();
		if (this->getIsSigned())
			throw AFormAlreadySignedException();
		if (bureau.getGrade() > this->getSignGrade())
			throw GradeTooLowException();
		std::cout << bureau.getName() << " just signed the Aform: "
		<< this->getName() << std::endl;
		this->_isSigned = true;
	} catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	
}

void		AForm::checkRequirements(Bureaucrat const &executor) const
{
	if (!getIsSigned())
		throw AFormNotSignedException();
	if (getExecGrade() < executor.getGrade())
		throw GradeTooLowException();
}

std::string	AForm::getName(void) const
{
	return (_name);
}

bool		AForm::getIsSigned(void) const
{
	return (_isSigned);
}

bool		AForm::getIsExecuted(void) const
{
	return (_isExecuted);
}

int			AForm::getSignGrade(void) const
{
	return (_signGrade);
}

int			AForm::getExecGrade(void) const
{
	return (_execGrade);
}

void		AForm::check_grades(void) const
{
	if (this->getSignGrade() < 1 || this->getSignGrade() > 150
		|| this->getExecGrade() < 1 || this->getExecGrade() > 150)
		throw InvalidFormException();
}

std::ostream	&operator<<(std::ostream &out, const AForm &Aform)
{
	out << "Name:                      " << Aform.getName() << "." << std::endl;
	if (Aform.getIsSigned())
		out << "AForm signed:              " << "Yes." << std::endl;
	else
		out << "AForm signed:              " << "No." << std::endl;
	out << "Grade required to sign:    " << Aform.getSignGrade() << "." << std::endl;
	out << "Grade required to execute: " << Aform.getExecGrade() << "." << std::endl;
	return (out);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char* AForm::AFormAlreadySignedException::what() const throw()
{
	return ("AForm already signed");
}

const char* AForm::AFormNotSignedException::what() const throw()
{
	return ("AForm not signed");
}

const char* AForm::InvalidFormException::what() const throw()
{
	return ("AForm invalid");
}
