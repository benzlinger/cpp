/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:03:43 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/27 17:14:58 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"
#include <iostream>

Base	*generate(void)
{
	Base	*p;
	int		r;

	std::srand((unsigned)std::time(0)); 
	r = (rand() % 3);
	if (r == 0)
	{
		p = new A;
		std::cout << "Base *p points to: A" << std::endl;
	}
	else if (r == 1)
	{
		p = new B;
		std::cout << "Base *p points to: B" << std::endl;
	}
	else
	{
		p = new C;
		std::cout << "Base *p points to: C" << std::endl;
	}
	return (p);
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Identified class: A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Identified class: B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Identified class: C" << std::endl;
	else
		std::cout << "Oops!" << std::endl;
}

void	identify(Base &p)
{
	try {
		Base	&a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "Identified class: A" << std::endl;
	} catch (std::exception &e) {
		try {
			Base	&b = dynamic_cast<B &>(p);
			(void)b;
			std::cout << "Identified class: B" << std::endl;
		} catch (std::exception &e) {
			try {
				Base	&c = dynamic_cast<C &>(p);
				(void)c;
				std::cout << "Identified class: C" << std::endl;
			} catch (std::exception &e) {
				std::cout << "Oops!" << std::endl;
			}
		}
	}
}

int	main(void)
{
	Base	*p;

	p = generate();
	std::cout << std::endl;
	std::cout << "Drumroll..." << std::endl;
	std::cout << std::endl;
	std::cout << "Pointer test:" << std::endl;
	identify(p);
	std::cout << std::endl;
	std::cout << "Reference test:" << std::endl;
	identify(*p);
	std::cout << std::endl;
	delete p;
	return (0);
}
