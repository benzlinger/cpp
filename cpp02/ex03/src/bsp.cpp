/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:00:47 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/06 12:58:45 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

// int	side(Point const a, Point const b, Point const point)
// {
// 	Fixed	n(-1);
// 	Fixed	res = (b.get_y() - a.get_y()) * (point.get_x() - a.get_x()) + ((n * b.get_x()) + a.get_x()) * (point.get_y() - a.get_y());
// 	return (res.toInt());
// }

// bool	bsp(Point const a, Point const b, Point const c, Point const point)
// {
// 	bool sideAB = side(a, b, point) >= 0;
// 	bool sideBC = side(b, c, point) >= 0;
// 	bool sideCA = side(c, a, point) >= 0;
// 	return (sideAB && sideBC && sideCA);
// }

float	calc_triangle_area(Point const a, Point const b, Point const c)
{
	Fixed		area;
	float		area_f;

	area = (a.get_x() * (b.get_y() - c.get_y()) + b.get_x() * (c.get_y() - a.get_y()) + c.get_x() * (a.get_y() - b.get_y())) / 2;
	area_f = area.toFloat();
	if (area_f < 0)
		area_f *= -1;
	return (area_f);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	abc;
	float	abp;
	float	acp;
	float	bcp;

	// std::cout << std::endl << "this is a:" << point << std::endl;
	abc = calc_triangle_area(a, b, c);
	abp = calc_triangle_area(a, b, point);
	acp = calc_triangle_area(a, c, point);
	bcp = calc_triangle_area(b, c, point);
	if (abc == (abp + acp + bcp))
		return (true);
	return (false);
}
