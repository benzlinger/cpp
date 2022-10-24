/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:13:22 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/24 18:36:47 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

int	main(void)
{
	{
		std::cout << "PARDON TEST" << std::endl;
		std::cout << "-------------------------------------" << std::endl << std::endl;
		PresidentialPardonForm	form("Mirko");
		Bureaucrat				bert("Bert", 1);
		Bureaucrat				badBert("badBert", 10);

		std::cout << std::endl << bert << std::endl;
		std::cout << std::endl << form << std::endl;
		bert.signAForm(form);
		std::cout << std::endl << form << std::endl;
		form.execute(bert);
		std::cout << std::endl;
		badBert.executeAForm(form);
		std::cout << std::endl;
	}
		std::cout << "-------------------------------------" << std::endl << std::endl;
	{
		std::cout << std::endl << "ROBOTOMY TEST" << std::endl;
		std::cout << "-------------------------------------" << std::endl << std::endl;
		RobotomyRequestForm	form("E45R");
		Bureaucrat			bert("Bert", 30);
		RobotomyRequestForm	uForm("E88T");

		std::cout << std::endl << bert << std::endl;
		std::cout << std::endl << form << std::endl;
		bert.signAForm(form);
		std::cout << std::endl << form << std::endl;
		form.execute(bert);
		std::cout << std::endl;
		std::cout << uForm << std::endl;
		std::cout << std::endl;
		bert.executeAForm(uForm);
		std::cout << std::endl;
	}
		std::cout << "-------------------------------------" << std::endl << std::endl;
	{
		std::cout << std::endl << "SHRUBBERY TEST" << std::endl;
		std::cout << "-------------------------------------" << std::endl << std::endl;
		ShrubberyCreationForm	form("Home");
		Bureaucrat				bert("Bert", 80);
		Bureaucrat				badBert("badBert", 140);

		std::cout << std::endl << bert << std::endl;
		std::cout << std::endl << form << std::endl;
		bert.signAForm(form);
		std::cout << std::endl << form << std::endl;
		form.execute(bert);
		std::cout << std::endl;
		badBert.executeAForm(form);
		std::cout << std::endl;
	}
	std::cout << "-------------------------------------" << std::endl << std::endl;
	return (0);
}

// # define BWHT "\033[1;37m"
// # define CRESET "\033[0m"
// # define YEL "\033[0;33m"
// # define NEWLINE() std::cout << std::endl

// static void	print_divider(std::string title = "")
// {
// 	int	ft = 30;

// 	NEWLINE();
// 	NEWLINE();
// 	ft -= title.length() / 2;
// 	std::cout << BWHT << '*';
// 	for (int i = 0; i < ft; i++)
// 		std::cout << "-";
// 	if ((title.length() / 2) % 2 == 0)
// 		std::cout << '-';
// 	if (title.empty() == false)
// 		std::cout << ' ' << title << ' ';
// 	else
// 		std::cout << "--";
// 	for (int i = 0; i < ft; i++)
// 		std::cout << '-';
// 	std::cout << '*' << CRESET << std::endl;
// 	NEWLINE();
// }

// int	main(void)
// {
// 	ShrubberyCreationForm	A28("working_directory");
// 	Bureaucrat 				flimb("Flimb", 150);
// 	Bureaucrat 				anakis("Anakis", 145);
// 	Bureaucrat 				pakas("Pakas", 137);
// 	print_divider("ShrubberyCreationForm [sign 145, exec 137]");
// 	std::cout << "[" << flimb << "]" << std::endl;
// 	std::cout << A28 << std::endl;
// 	std::cout << flimb.getName() << " is trying to sign form " << A28.getName() << " with target " << YEL << A28.getTarget() << CRESET << std::endl;
// 	flimb.signAForm(A28);
// 	std::cout << A28 << std::endl;
// 	std::cout << flimb.getName() << " is trying to execute form " << A28.getName() << " with target " << YEL << A28.getTarget() << CRESET << std::endl;
// 	flimb.executeAForm(A28);
// 	NEWLINE();
// 	std::cout << "[" << anakis << "]" << std::endl;
// 	std::cout << A28 << std::endl;
// 	std::cout << anakis.getName() << " is trying to sign form " << A28.getName() << " with target " << YEL << A28.getTarget() << CRESET << std::endl;
// 	anakis.signAForm(A28);
// 	std::cout << A28 << std::endl;
// 	std::cout << anakis.getName() << " is trying to execute form " << A28.getName() << " with target " << YEL << A28.getTarget() << CRESET << std::endl;
// 	anakis.executeAForm(A28);
// 	NEWLINE();
// 	std::cout << "[" << pakas << "]" << std::endl;
// 	std::cout << A28 << std::endl;
// 	std::cout << pakas.getName() << " is trying to sign form " << A28.getName() << " with target " << YEL << A28.getTarget() << CRESET << std::endl;
// 	pakas.signAForm(A28);
// 	std::cout << A28 << std::endl;
// 	std::cout << pakas.getName() << " is trying to execute form " << A28.getName() << " with target " << YEL << A28.getTarget() << CRESET << std::endl;
// 	pakas.executeAForm(A28);

// 	RobotomyRequestForm	B28("Flimb");
// 	Bureaucrat			valendir("Valendir", 72);
// 	Bureaucrat			yasha("Yasha", 45);
// 	print_divider("RobotomyRequestForm [sign 72, exec 45]");
// 	std::cout << "[" << pakas << "]" << std::endl;
// 	std::cout << B28 << std::endl;
// 	std::cout << pakas.getName() << " is trying to sign form " << B28.getName() << " with target " << YEL << B28.getTarget() << CRESET << std::endl;
// 	pakas.signAForm(B28);
// 	std::cout << B28 << std::endl;
// 	std::cout << pakas.getName() << " is trying to execute form " << B28.getName() << " with target " << YEL << B28.getTarget() << CRESET << std::endl;
// 	pakas.executeAForm(B28);
// 	NEWLINE();
// 	std::cout << "[" << valendir << "]" << std::endl;
// 	std::cout << B28 << std::endl;
// 	std::cout << valendir.getName() << " is trying to sign form " << B28.getName() << " with target " << YEL << B28.getTarget() << CRESET << std::endl;
// 	valendir.signAForm(B28);
// 	std::cout << B28 << std::endl;
// 	std::cout << valendir.getName() << " is trying to execute form " << B28.getName() << " with target " << YEL << B28.getTarget() << CRESET << std::endl;
// 	valendir.executeAForm(B28);
// 	NEWLINE();
// 	std::cout << "[" << yasha << "]" << std::endl;
// 	std::cout << B28 << std::endl;
// 	std::cout << yasha.getName() << " is trying to sign form " << B28.getName() << " with target " << YEL << B28.getTarget() << CRESET << std::endl;
// 	yasha.signAForm(B28);
// 	std::cout << B28 << std::endl;
// 	std::cout << yasha.getName() << " is trying to execute form " << B28.getName() << " with target " << YEL << B28.getTarget() << CRESET << std::endl;
// 	NEWLINE();
// 	yasha.executeAForm(B28);
// 	yasha.executeAForm(B28);
// 	yasha.executeAForm(B28);
// 	yasha.executeAForm(B28);
// 	yasha.executeAForm(B28);
// 	yasha.executeAForm(B28);

// 	print_divider("PresidentialPardonForm [sign 25, exec 5]");
// 	PresidentialPardonForm	C28("Yasha");
// 	Bureaucrat				frodo("Frodo", 25);
// 	Bureaucrat				arod("Arod", 5);
// 	std::cout << "[" << yasha << "]" << std::endl;
// 	std::cout << C28 << std::endl;
// 	std::cout << yasha.getName() << " is trying to sign form " << C28.getName() << " with target " << YEL << C28.getTarget() << CRESET << std::endl;
// 	yasha.signAForm(C28);
// 	std::cout << C28 << std::endl;
// 	std::cout << yasha.getName() << " is trying to execute form " << C28.getName() << " with target " << YEL << C28.getTarget() << CRESET << std::endl;
// 	yasha.executeAForm(C28);
// 	NEWLINE();
// 	std::cout << "[" << frodo << "]" << std::endl;
// 	std::cout << C28 << std::endl;
// 	std::cout << frodo.getName() << " is trying to sign form " << C28.getName() << " with target " << YEL << C28.getTarget() << CRESET << std::endl;
// 	frodo.signAForm(C28);
// 	std::cout << C28 << std::endl;
// 	std::cout << frodo.getName() << " is trying to execute form " << C28.getName() << " with target " << YEL << C28.getTarget() << CRESET << std::endl;
// 	frodo.executeAForm(C28);
// 	NEWLINE();
// 	std::cout << "[" << arod << "]" << std::endl;
// 	std::cout << C28 << std::endl;
// 	std::cout << arod.getName() << " is trying to sign form " << C28.getName() << " with target " << YEL << C28.getTarget() << CRESET << std::endl;
// 	arod.signAForm(C28);
// 	std::cout << C28 << std::endl;
// 	std::cout << arod.getName() << " is trying to execute form " << C28.getName() << " with target " << YEL << C28.getTarget() << CRESET << std::endl;
// 	arod.executeAForm(C28);

// 	print_divider("EXIT_SUCCESS");
// 	return EXIT_SUCCESS;
// }
