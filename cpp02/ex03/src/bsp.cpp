/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:00:47 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/03 15:57:32 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

float	calc_triangle_area(Point const a, Point const b, Point const c)
{
	Fixed		area;
	float		area_f;

	area = (a.get_x() * (b.get_y() - c.get_y()) + b.get_x() * (c.get_y() - a.get_y()) + c.get_x() * (a.get_y() - b.get_y())) / 2;
	std::cout << "[Area] -> " << area.toFloat() << std::endl;
	area_f = area.toFloat();
	// std::cout << area_f << std::endl;
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
	// std::cout << abc << ", " << (abp + acp + bcp) << std::endl;
	if (abc == (abp + acp + bcp))
		return (true);
	return (false);
}
