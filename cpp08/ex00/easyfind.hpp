/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:22:00 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/31 14:51:23 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <algorithm>
# include <iostream>

class NumNotFoundException : public std::exception {
	const char	*what() const throw() { return ("Number not found"); }
};

template<typename T>
typename T::iterator	easyfind(T &cont, const int num)
{
	typename T::iterator	it;

	it = find(cont.begin(), cont.end(), num);
	if (it == cont.end())
		throw NumNotFoundException();
	return (it);
}