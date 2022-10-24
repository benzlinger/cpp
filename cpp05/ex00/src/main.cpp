/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 10:13:22 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/24 10:39:44 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int	main(void)
{
	{
		std::cout << "DEFAULT BUREAUCRAT TESTING" << std::endl << std::endl;
		Bureaucrat def;

		def.decrementGrade();
		std::cout << def << std::endl;
	}
	{
		std::cout << std::endl << "BERT TESTING" << std::endl <<std::endl;
		Bureaucrat	bert("Bert", 1);

		std::cout << bert << std::endl;
		bert.decrementGrade();
		bert.incrementGrade();
		bert.incrementGrade();
		std::cout << bert << std::endl;
	}
	return (0);
}
