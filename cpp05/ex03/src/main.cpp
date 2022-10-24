/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:13:22 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/24 19:51:53 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Intern.hpp"

// int	main(void)
// {
// 	Bureaucrat	pres("President", 1);
// 	Intern		exploitedIntern;
// 	AForm		*forms[4];

// 	forms[0] = exploitedIntern.makeForm("shrubbery creation", "Target1");
// 	forms[1] = exploitedIntern.makeForm("robotomy request", "Target2");
// 	forms[2] = exploitedIntern.makeForm("presidential pardon", "Target3");
// 	forms[3] = exploitedIntern.makeForm("formular", "Target4");

// 	for (int i = 0; i < 4; i++)
// 	{
// 		if (forms[i])
// 		{
// 			std::cout << std::endl << *(forms[i]);
// 			pres.signAForm(*(forms[i]));
// 			pres.executeAForm(*(forms[i]));
// 		}
// 	}
// 	delete[] forms;

// 	return (0);
// }


	// Intern		intern;
	// Bureaucrat	bert("Bert", 1);

	// AForm	*form = intern.makeForm("robotomy request", "E22B");
	// bert.signAForm(*form);
	// bert.executeAForm(*form);
	// delete form;
	// std::cout << std::endl;
	// form = intern.makeForm("shrubbery creation", "Home");
	// bert.signAForm(*form);
	// bert.executeAForm(*form);
	// delete form;
	// std::cout << std::endl;
	// form = intern.makeForm("presidential pardon", "Mirko");
	// bert.signAForm(*form);
	// bert.executeAForm(*form);
	// delete form;
	// std::cout << std::endl;
	// form = intern.makeForm("nonsense", "Mirko");
	// bert.signAForm(*form);
	// bert.executeAForm(*form);
	// delete form;

	// return (0);
// }

# define BWHT "\033[1;37m"
# define CRESET "\033[0m"
# define YEL "\033[0;33m"
# define NEWLINE() std::cout << std::endl

static void	print_divider(std::string title = "")
{
	int	ft = 30;

	NEWLINE();
	NEWLINE();
	ft -= title.length() / 2;
	std::cout << BWHT << '*';
	for (int i = 0; i < ft; i++)
		std::cout << "-";
	if ((title.length() / 2) % 2 == 0)
		std::cout << '-';
	if (title.empty() == false)
		std::cout << ' ' << title << ' ';
	else
		std::cout << "--";
	for (int i = 0; i < ft; i++)
		std::cout << '-';
	std::cout << '*' << CRESET << std::endl;
	NEWLINE();
}

int	main(void)
{
		Intern		someRandomIntern;
	std::string scf = "shrubbery creation";
	std::string rrf = "robotomy request";
	std::string ppf = "presidential pardon";
	std::string	T1 = "Bender";
	std::string	spf = "some petition";
	Bureaucrat	evaluator("Evaluator", 1);

	print_divider("Creating pointer to Form Objects");
	std::cout << "Some random Intern is trying to create the form: " << YEL << scf << CRESET << std::endl;
	AForm*		A28 = someRandomIntern.makeForm(scf, T1);
	std::cout << "Form " << *A28 << " was created by some randon intern with target " << YEL << T1 << CRESET << std::endl;
	std::cout << "FormPTR: " << YEL << A28 << CRESET << std::endl;
	NEWLINE();
	std::cout << "Some random Intern is trying to create the form: " << YEL << rrf << CRESET << std::endl;
	AForm*		B28 = someRandomIntern.makeForm(rrf, T1);
	std::cout << "Form " << *B28 << " was created by some randon intern with target " << YEL << T1 << CRESET << std::endl;
	std::cout << "FormPTR: " << YEL << B28 << CRESET << std::endl;
	NEWLINE();
	std::cout << "Some random Intern is trying to create the form: " << YEL << ppf << CRESET << std::endl;
	AForm*		C28 = someRandomIntern.makeForm(ppf, T1);
	std::cout << "Form " << *C28 << " was created by some randon intern with target " << YEL << T1 << CRESET << std::endl;
	std::cout << "FormPTR: " << YEL << C28 << CRESET << std::endl;
	NEWLINE();
	std::cout << "Some random Intern is trying to create the form: " << YEL << spf << CRESET << std::endl;
	AForm*		D28 = someRandomIntern.makeForm(spf, T1);
	std::cout << "FormPTR: " << YEL << D28 << CRESET << std::endl;

	print_divider("Signing and Executing the Forms");
	std::cout << evaluator << std::endl;
	NEWLINE();
	evaluator.signAForm(*A28);
	evaluator.executeAForm(*A28);
	NEWLINE();
	evaluator.signAForm(*B28);
	evaluator.executeAForm(*B28);
	NEWLINE();
	evaluator.signAForm(*C28);
	evaluator.executeAForm(*C28);
	
	print_divider("EXIT_SUCCESS");
	delete A28;
	delete B28;
	delete C28;
	return EXIT_SUCCESS;
}
