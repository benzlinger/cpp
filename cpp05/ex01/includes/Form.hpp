/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:27:50 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/25 18:39:50 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

public:

	Form(void);
	Form(std::string name, int signGrade, int execGrade);
	Form(const Form &other);
	~Form(void);

	Form	&operator=(const Form &other);

	void		beSigned(Bureaucrat &bureau);

	std::string	getName(void) const;
	bool		getIsSigned(void) const;
	int			getSignGrade(void) const;
	int			getExecGrade(void) const;

	class GradeTooHighException : public std::exception {
		const char	*what() const throw();
	};

	class GradeTooLowException : public std::exception {
		const char	*what() const throw();
	};

	class FormAlreadySignedException : public std::exception {
		const char	*what() const throw();
	};

	class InvalidFormException : public std::exception {
		const char	*what() const throw();
	};

private:

	const std::string	_name;
	bool				_isSigned;
	const int			_signGrade;
	const int			_execGrade;

	void				check_grades(void) const;

};

std::ostream	&operator<<(std::ostream &out, const Form &form);

#endif
