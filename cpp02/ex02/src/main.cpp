/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:43:24 by btenzlin          #+#    #+#             */
/*   Updated: 2022/09/29 17:05:00 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

int	main(void)
{
	Fixed		a(12);
	Fixed const	b( Fixed(5.05f) * Fixed(2));
	Fixed 		c(1234.56f);
	Fixed		d(12);
	Fixed		e;
	Fixed const	f(c);
	bool		x = false;

	std::cout << "Comparison testing:" << std::endl;
	std::cout << "Test: a:" << a << " > b:" << b << " -> ";
	if (a > b)
		std::cout << "a" << std::endl;
	else
		std::cout << "b" << std::endl;
	std::cout << "Test: a:" << a << " >= c:" << c << " -> ";
	if (a >= c)
		std::cout << "a" << std::endl;
	else
		std::cout << "c" << std::endl;
	std::cout << "Test: a:" << a << " == d:" << d << " -> ";
	x = a == d;
	std::cout << x << std::endl;
	std::cout << "Test: b:" << b << " == c:" << c << " -> ";
	x = b == c;
	std::cout << x << std::endl;
	std::cout << std::endl;

	std::cout << "Arithmetic testing:" << std::endl;
	std::cout << "Test: a:" << a << " + b:" << b << " -> ";
	a = a + b;
	std::cout << "a:" << a << " b:" << b << std::endl;
	std::cout << "Test: d:" << d << " * d:" << d << " -> ";
	d = d * d;
	std::cout << "d:" << d << std::endl;
	std::cout << std::endl;

	std::cout << "Increment/decrement testing:" << std::endl;
	std::cout << "e: starting at:" << std::endl;
	std::cout << e << std::endl;
	std::cout << ++e << std::endl;
	std::cout << e << std::endl;
	std::cout << e++ << std::endl;
	std::cout << e << std::endl;
	std::cout << std::endl;
	
	std::cout << "e: starting at:" << std::endl;
	std::cout << e << std::endl;
	std::cout << e-- << std::endl;
	std::cout << e << std::endl;
	std::cout << --e << std::endl;
	std::cout << e << std::endl;
	std::cout << --e << std::endl;
	std::cout << std::endl;

	std::cout << "Min/max testing:" << std::endl;
	std::cout << "a:" << a << ", e:" << e << " -> max" << std::endl;
	std::cout << Fixed::max( a, e ) << std::endl;
	std::cout << "f:" << f << ", b:" << b << " -> min" << std::endl;
	std::cout << Fixed::min( f, b ) << std::endl;
	std::cout << std::endl;

	return (0);
}
