/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:27:50 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/24 14:02:01 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

public:

	AForm(void);
	AForm(std::string name, int signGrade, int execGrade);
	AForm(const AForm &other);
	virtual ~AForm(void);

	AForm			&operator=(const AForm &other);

	void			beSigned(Bureaucrat &bureau);
	void			checkRequirements(Bureaucrat const &executor) const;
	virtual void	execute(Bureaucrat const &executor) const = 0;


	std::string		getName(void) const;
	bool			getIsSigned(void) const;
	bool			getIsExecuted(void) const;
	int				getSignGrade(void) const;
	int				getExecGrade(void) const;

	class GradeTooHighException : public std::exception {
		const char	*what() const throw() { return ("Grade too high"); }
	};

	class GradeTooLowException : public std::exception {
		const char	*what() const throw() { return ("Grade too low"); }
	};

	class AFormAlreadySignedException : public std::exception {
		const char	*what() const throw() { return ("AForm already signed"); }
	};

	class AFormNotSignedException : public std::exception {
		const char	*what() const throw() { return ("AForm not signed"); }
	};

private:

	const std::string	_name;
	bool				_isSigned;
	bool				_isExecuted;
	const int			_signGrade;
	const int			_execGrade;

};

std::ostream	&operator<<(std::ostream &out, const AForm &Aform);

#endif
