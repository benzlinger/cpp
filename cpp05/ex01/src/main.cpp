/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:13:22 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/25 18:44:16 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int	main(void)
{
	{
		std::cout << "BOB TESTING" << std::endl;
		Bureaucrat	bob("Bob", 150);
		Form		form1("Form1", 65, 5);

		std::cout << std::endl << bob << std::endl;
		std::cout << std::endl;
		std::cout << form1;
		std::cout << std::endl;
		form1.beSigned(bob);
		std::cout << std::endl;
		bob.signForm(form1);
		std::cout << std::endl;
		std::cout << form1;
	}

	{
		std::cout << std::endl << "BELLA TESTING" << std::endl;
		Bureaucrat	bella("Bella", 30);
		Form		form2("Form2", 30, 30);
		Form		form3("Form3", 25, 10);

		std::cout << std::endl << bella << std::endl;
		std::cout << std::endl;
		std::cout << form2;
		std::cout << std::endl;
		form2.beSigned(bella);
		std::cout << std::endl;
		bella.signForm(form2);
		std::cout << std::endl;
		std::cout << form2;
		std::cout << std::endl;
		std::cout << form3;
		bella.signForm(form3);
		std::cout << form3;
		std::cout << std::endl;
	}

	return (0);
}

// # define BWHT "\033[1;37m"
// # define CRESET "\033[0m"
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
// 	print_divider("TEST 1: Trying to create a Form with grade_to_sign = -42");
// 		Form	visa28a("VISA_28A_application", -42, 75);
// 		std::cout << visa28a << std::endl;

// 	print_divider("TEST 2: Trying to create a Form with grade_to_sign = 420");
// 		Form	visa28b("VISA_28B_application", 420, 75);
// 		std::cout << visa28b << std::endl;

// 	print_divider("TEST 3: Trying to create a Form with grade_to_execute = -42");
// 		Form	visa28c("VISA_28C_application", 75, -42);
// 		std::cout << visa28c << std::endl;

// 	print_divider("TEST 4: Trying to create a Form with grade_to_execute = 420");
// 		Form	visa28d("VISA_28D_application", 75, 420);
// 		std::cout << visa28d << std::endl;

// 	print_divider("TEST 5: Trying to copy a form");
// 		Form a("Form-A", 42, 42);
// 		std::cout << "a('Form-A', 42, 42):\n" << a << std::endl;
// 		Form b(a);
// 		std::cout << "b(a):\n" << b << std::endl;
// 		Bureaucrat	Flimb("Flimb", 1);
// 		std::cout << std::endl << "\n" << Flimb << std::endl << std::endl;
// 		std::cout << "b:\n";
// 		Flimb.signForm(b);
// 		std::cout << "b:\n" << b << std::endl;
// 		std::cout << "a:\n" << a << std::endl;

// 	print_divider("TEST 6: Bureaucrat of grade 42 signs a Form of grade 42");
// 		Bureaucrat	anakis("Anakis", 42);
// 		std::cout << anakis << std::endl;
// 		Form		visa_daggerford("VISA_Daggerford_application", 42, 42);
// 		anakis.signForm(visa_daggerford);
// 		std::cout << visa_daggerford << std::endl;

// 	print_divider("TEST 7: Bureacrat of grade 42 signs an already signed form");
// 		std::cout << anakis << std::endl;
// 		anakis.signForm(visa_daggerford);
// 		std::cout << visa_daggerford << std::endl;

// 	print_divider("TEST 8: Bureaucrat of grade 43 signs a Form of grade 42");
// 		Bureaucrat	pakas("Pakas", 43);
// 		std::cout << pakas << std::endl;
// 		Form		visa_waterdeep("VISA_Waterdeep_application", 42, 42);
// 		pakas.signForm(visa_waterdeep);
// 		std::cout << visa_waterdeep << std::endl;

// 	print_divider("EXIT_SUCCESS");
// 	return EXIT_SUCCESS;
// }
