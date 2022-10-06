/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:43:24 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/06 12:58:58 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"

int	main(void)
{
	// Point			x;
	// Point			y(3.14f, 6.28f);
	// Point			z(y);
	// Point			w;

	// w = y;

	// std::cout << "x" << x << std::endl;
	// std::cout << "y" << y << std::endl;
	// std::cout << "z" << z << std::endl;
	// std::cout << "w" << w << std::endl;

	// Point a(-1.5, -1.5);
	// Point b(2.5, 2.5);
	// Point c(-1, -2);
	// Point p1(8.5, -9);

	Point		a(-2.0f, -2.0f);
	Point		b(2.0f, 2.0f);
	Point		c(2.0f, -2.0f);
	Point		p1(1, -1.0f);
	// Point		p2(1.45f, 1.0f);
	// Point		p3(1.4f, 10.0f);
	// Point		p4(-1.0f, -1.0f);

	std::cout << "Triangle points: A" << a << ", B" << b << ", C" << c << std::endl;
	std::cout << "p1 " << p1 << " -> " << (bsp(a, b, c, p1) ? "inside" : "outside") << std::endl;
	// std::cout << "p2 " << p2 << " -> " << (bsp(a, b, c, p2) ? "inside" : "outside") << std::endl;
	// std::cout << "p3 " << p3 << " -> " << (bsp(a, b, c, p3) ? "inside" : "outside") << std::endl;
	// std::cout << "p4 " << p4 << " -> " << (bsp(a, b, c, p4) ? "inside" : "outside") << std::endl;

	return (0);
}
