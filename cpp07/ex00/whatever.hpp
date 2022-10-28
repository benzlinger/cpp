/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:34:15 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/28 11:14:21 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

# include <iostream>

template < typename T >
void	swap(T &x,T &y)
{
	T	temp;

	temp = x;
	x = y;
	y = temp;
}

template < typename T >
const T	&min(const T &x, const T &y)
{
	if (x < y)
		return (x);
	return (y);
}

template < typename T >
const T	&max(const T &x, const T &y)
{
	if (x > y)
		return (x);
	return (y);
}

#endif