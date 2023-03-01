/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:19:09 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/28 14:32:43 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

# include <iostream>

template <typename T>
void	printElement(const T &element)
{
	std::cout << element << std::endl;
}

template <typename T>
void	iter(T *arr, const int size, void function(const T &))
{
	if (arr)
	{
		for (int i = 0; i < size; i++)
			function(arr[i]);
	}
}

#endif
