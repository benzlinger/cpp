/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:24:55 by btenzlin          #+#    #+#             */
/*   Updated: 2023/03/07 18:43:21 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}

PmergeMe::PmergeMe(char **nums, int size)
{
	for (int i = 1; i < size; i++)
		_nums_vec.push_back(atoi(nums[i]));
}

PmergeMe::PmergeMe(const PmergeMe &other) { *this = other; }

PmergeMe::~PmergeMe(void) {}

PmergeMe	&PmergeMe::operator=(const PmergeMe &other)
{
	if (this != &other)
	{
		_nums_vec = other._nums_vec;
	}
	return (*this);
}