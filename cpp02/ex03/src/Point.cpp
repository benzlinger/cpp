/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:21:31 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/03 14:47:22 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
	// std::cout << "Other default constructor called" << std::endl;
}

Point::Point(Point const &other) : _x(other.get_x()), _y(other.get_y())
{
	// std::cout << "Copy constructor called" << std::endl;
}

Point::~Point(void)
{
	// std::cout << "Destructor called" << std::endl;
}

Point	&Point::operator=(Point const &other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Point &p)
{
	out << "x: " << p.get_x() << ", y: " << p.get_y();
	return (out);
}

Fixed	Point::get_x(void) const
{
	return (_x);
}

Fixed	Point::get_y(void) const
{
	return (_y);
}
