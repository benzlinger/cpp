/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:06:39 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/31 19:04:01 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"
#include <time.h>

int	main(void)
{
	{
		std::cout << "SUBJECT TESTS" << std::endl;
		Span	sp = Span(5);

		try {
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "MY TESTS" << std::endl;
		Span	sp = Span(10);

		try {
			sp.addNumber(0);
			sp.addNumber(500);
			sp.addNumber(-1000);
			sp.addNumber(42);
			sp.addNumber(41);
			sp.addNumber(21);
			sp.addNumber(6000);
			sp.addNumber(-3);
			sp.addNumber(1);
			sp.addNumber(42);

			std::cout << "Contents:      " << sp << std::endl;
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span:  " << sp.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "MY EXCEPTION TESTS" << std::endl;
		Span	sp = Span(10);

		try {
			sp.addNumber(0);
			sp.addNumber(500);
			sp.addNumber(-1000);
			sp.addNumber(42);
			sp.addNumber(41);
			sp.addNumber(21);
			sp.addNumber(6000);
			sp.addNumber(-3);
			sp.addNumber(1);
			sp.addNumber(42);
			sp.addNumber(42);
		} catch (std::exception &e) {
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	}
		std::cout << std::endl;
	{
		Span	sp = Span(1);

		try {
			sp.addNumber(500);
			std::cout << "Contents:      " << sp << std::endl;
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		std::cout << "MY RANGE OF ITERATOR TESTS" << std::endl;
		int					size = 10000;
		Span				sp = Span(size);
		std::vector<int>	vec;

		try {
			srand((unsigned int)time(NULL));
			for (unsigned int i = 0; i < (unsigned int)size; i++)
				vec.push_back(rand() % (size * 10000));
			sp.addMultiple(vec.begin(), vec.end());
			std::cout << "Contents:      " << sp;
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span:  " << sp.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	}
	return (0);
}
