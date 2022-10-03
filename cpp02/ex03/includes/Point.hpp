/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:17:47 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/03 14:43:31 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include <iostream>
# include <cmath>
#include "Fixed.hpp"

class Point
{
public:
	Point(void);
	Point(float const x, float const y);
	Point(Point const &other);
	~Point(void);

	Point		&operator=(Point const &other);

	Fixed		get_x(void) const;
	Fixed		get_y(void) const;

private:

	Fixed const	_x;
	Fixed const	_y;

};

std::ostream	&operator<<(std::ostream &out, const Point &p);
bool			bsp(Point const a, Point const b, Point const c, Point const point);

#endif
