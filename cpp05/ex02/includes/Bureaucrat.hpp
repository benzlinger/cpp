/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:13:47 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/24 17:33:13 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include "AForm.hpp"

class AForm;

class Bureaucrat {

public:

	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &other);
	~Bureaucrat(void);

	Bureaucrat			&operator=(const Bureaucrat &other);

	void				signAForm(AForm &Aform);
	void				executeAForm(AForm &Aform);
	void				incrementGrade(void);
	void				decrementGrade(void);

	std::string			getName(void) const;
	int					getGrade(void) const;

	class GradeTooHighException : public std::exception {
		const char	*what() const throw() { return ("Grade too high"); }
	};

	class GradeTooLowException : public std::exception {
		const char	*what() const throw() { return ("Grade too low"); }
	};

	class InvalidGradeException : public std::exception {
		const char	*what() const throw() { return ("Bureaucrat invalid"); }
	};

private:

	const std::string	_name;
	int					_grade;

};

std::ostream		&operator<<(std::ostream &out, const Bureaucrat &bureau);

#endif