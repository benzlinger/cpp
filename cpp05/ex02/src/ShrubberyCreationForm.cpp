/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:31:27 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/24 17:56:05 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	AForm("Shrubbery Creation", 145, 137)
{
	std::cout << "SCF default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	AForm("Shrubbery Creation", 145, 137), _target(target)
{
	std::cout << "SCF string constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
{
	std::cout << "SCF copy constructor called" << std::endl;
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "SCF destructor called" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	(void)other;
	std::cout << "SCF copy assignment operator called" << std::endl;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	try {
		checkRequirements(executor);
		// std::string		name = _target.append("_shrubbery");
		std::ofstream	newFile(_target + "_shrubbery");
		std::string		buf = "                      ___\n                _,-\'\"\"   \"\"\"\"`--.\n             ,-'          __,,-- \\\n           ,'    __,--\"\"\"\"dF      )\n          /   .-\"Hb_,--\"\"dF      /\n        ,'       _Hb ___dF\"-._,-'\n      ,'      _,-\"\"\"\"   \"\"--..__\n     (     ,-\'                  `.\n      `._,\'     _   _             ;\n       ,\'     ,\' `-\'Hb-.___..._,-\'\n       \\    ,\'\"Hb.-\'HH`-.dHF\"\n        `--\'   \"Hb  HH  dF\"\n                \"Hb HH dF\n                 \"HbHHdF\n                  |HHHF\n                  |HHH|\n                  |HHH|\n                  |HHH|\n                  |HHH|\n                  dHHHb\n                .dFd|bHb.               o\n      o       .dHFdH|HbTHb.          o /\n\\  Y  |  \\__,dHHFdHH|HHhoHHb.___Ben   Y\n##########################################";
		newFile << buf;
		std::cout << _target << " shrubbery file created." << std::endl;
	} catch (std::exception &e) {
			std::cout << "Exception caught: " << e.what() << std::endl;
	}
}

std::string				ShrubberyCreationForm::getTarget(void) const
{
	return (_target);
}
