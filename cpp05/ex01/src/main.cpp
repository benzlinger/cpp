/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:13:22 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/22 17:55:29 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int	main(void)
{
	{
		try {
			Bureaucrat	bob("Bob", 80);
			Form		form1("Form1", 65, 5);

			std::cout << bob << std::endl;
			std::cout << form1;
			std::cout << std::endl;
			form1.beSigned(bob);
			std::cout << std::endl;
			std::cout << form1;
		} catch (std::exception &e) {
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	}

	{
		std::cout << "BELLA TESTING" << std::endl;
		Bureaucrat	bella("bella", 30);
		Form		form2("Form2", 29, 30);

		std::cout << form2;
		std::cout << std::endl;
		bella.signForm(form2);
		std::cout << std::endl;
		std::cout << form2;
	}

	return (0);
}
