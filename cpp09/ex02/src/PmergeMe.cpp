/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:24:55 by btenzlin          #+#    #+#             */
/*   Updated: 2023/05/13 13:43:32 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

PmergeMe::PmergeMe(void) {}

PmergeMe::PmergeMe(char **nums, int size)
{
	for (int i = 1; i < size; i++)
	{
		int val = atoi(nums[i]);
		// if (std::find(_nums_vec.begin(), _nums_vec.end(), val) != _nums_vec.end())
		// {
		// 	std::cerr << "Error: No duplicates." << std::endl;
		// 	exit(1);
		// }
		_nums_vec.push_back(val);
		_nums_deque.push_back(val);
		_original_sequence = _nums_vec;
	}
}

/* --- DEQUE FUNCTIONS --- */

/* group elements of the deque into pairs of two */
PmergeMe::deque_pair		PmergeMe::deque_to_pairs(void)
{
	deque_pair	pairs;

	for (std::deque<int>::iterator it = _nums_deque.begin(); it != _nums_deque.end(); it += 2)
	{
		std::pair<int, int> pair(*it, *(it + 1));
		pairs.push_back(pair);
	}
	return (pairs);
}

/* sort pair elements into: <smaller, larger> */
void				PmergeMe::sort_pair_elements(deque_pair &pairs)
{
	for (deque_pair::iterator it = pairs.begin(); it != pairs.end(); it++)
	{
		if (it->first > it->second)
		{
			int tmp = it->first;
			it->first = it->second;
			it->second = tmp;
		}
	}
}

/* sort pairs by the second element (larger number of the two) using insertion sort */
void				PmergeMe::sort_pairs(deque_pair &pairs)
{
	for (deque_pair::iterator it = (pairs.begin() + 1); it != pairs.end(); it++)
	{
		std::pair<int, int> val = *it;
		deque_pair::iterator ite = (it - 1);
		while (ite >= pairs.begin() && val.second < ite->second)
		{
			*(ite + 1) = *ite;
			ite--;
		}
		*(ite + 1) = val;
	}
}

// insert an element into S by using binary-search-insertion
void				PmergeMe::binary_search_insert(std::deque<int> &S, int elem)
{
	std::deque<int>::iterator	l = S.begin();
	std::deque<int>::iterator	r = (S.end() - 1);

	while (*l < *r)
	{
		std::deque<int>::iterator	m = l + (std::distance(l, r) / 2);
		if (elem > *m && elem < *(m + 1))
		{
			S.insert(m + 1, 1,  elem);
			return ;
		}
		else if (elem < *m && elem > *(m - 1))
		{
			S.insert(m, 1, elem);
			return ;
		}
		else if (elem <= *l)
		{
			S.insert(l, elem);
			return ;
		}
		else if (elem >= *r)
		{
			S.push_back(elem);
			return ;
		}
		else if (elem == *m)
		{
			S.insert(m, 1, elem);
			return ;
		}
		else if (elem > *m)
			l = m;
		else if (elem < *m)
			r = m;
	}
}

std::deque<int>	PmergeMe::sort_deque(void)
{
	int	odd = -1;

	// if there's an odd amount of numbers, cut the last one ('straggler') and insert it again at the end
	if (_nums_deque.size() % 2 != 0)
	{
		odd = *(_nums_deque.end() - 1);
		_nums_deque.pop_back();
	}

	deque_pair pairs = deque_to_pairs();

	sort_pair_elements(pairs);

	sort_pairs(pairs);

	// divide deque into two deque: S contains the larger elements (sorted), pend contains the smaller elements (unsorted)
	std::deque<int>	S;
	std::deque<int>	pend;
	for (deque_pair::iterator it = pairs.begin(); it != pairs.end(); it++)
	{
		pend.push_back(it->first);
		S.push_back(it->second);
	}

	// insert the first element of pend at the beginning of S (next to its original paired element)
	S.insert(S.begin(), *pend.begin());
	pend.erase(pend.begin());

	// insert each element of pend into S using binary search
	std::deque<int>::iterator it = pend.begin();
	while (it != pend.end())
	{
		binary_search_insert(S, *it);
		it = pend.erase(it);
	}

	//insert the 'straggler' into the sorted sequence at the end
	if (odd != -1)
		binary_search_insert(S, odd);

	return (S);
}

/* --- VECTOR FUNCTIONS --- */

/* group elements of the vector into pairs of two */
PmergeMe::vec_pair			PmergeMe::vec_to_pairs(void)
{
	vec_pair	pairs;

	for (std::vector<int>::iterator it = _nums_vec.begin(); it != _nums_vec.end(); it += 2)
	{
		std::pair<int, int> pair(*it, *(it + 1));
		pairs.push_back(pair);
	}
	return (pairs);
}

/* sort pair elements into: <smaller, larger> */
void				PmergeMe::sort_pair_elements(vec_pair &pairs)
{
	for (vec_pair::iterator it = pairs.begin(); it != pairs.end(); it++)
	{
		if (it->first > it->second)
		{
			int tmp = it->first;
			it->first = it->second;
			it->second = tmp;
		}
	}
}

/* sort pairs by the second element (larger number of the two) using insertion sort */
void				PmergeMe::sort_pairs(vec_pair &pairs)
{
	for (vec_pair::iterator it = (pairs.begin() + 1); it != pairs.end(); it++)
	{
		std::pair<int, int> val = *it;
		vec_pair::iterator ite = (it - 1);
		while (ite >= pairs.begin() && val.second < ite->second)
		{
			*(ite + 1) = *ite;
			ite--;
		}
		*(ite + 1) = val;
	}
}

// insert an element into S by using binary-search-insertion
void				PmergeMe::binary_search_insert(std::vector<int> &S, int elem)
{
	std::vector<int>::iterator	l = S.begin();
	std::vector<int>::iterator	r = (S.end() - 1);

	while (*l < *r)
	{
		std::vector<int>::iterator	m = l + (std::distance(l, r) / 2);
		if (elem > *m && elem < *(m + 1))
		{
			S.insert(m + 1, 1,  elem);
			return ;
		}
		else if (elem < *m && elem > *(m - 1))
		{
			S.insert(m, 1, elem);
			return ;
		}
		else if (elem <= *l)
		{
			S.insert(l, elem);
			return ;
		}
		else if (elem >= *r)
		{
			S.push_back(elem);
			return ;
		}
		else if (elem == *m)
		{
			S.insert(m, 1, elem);
			return ;
		}
		else if (elem > *m)
			l = m;
		else if (elem < *m)
			r = m;
	}
}

std::vector<int>	PmergeMe::sort_vec(void)
{
	int	odd = -1;

	// if there's an odd amount of numbers, cut the last one ('straggler') and insert it again at the end
	if (_nums_vec.size() % 2 != 0)
	{
		odd = *(_nums_vec.end() - 1);
		_nums_vec.pop_back();
	}

	vec_pair pairs = vec_to_pairs();

	sort_pair_elements(pairs);

	sort_pairs(pairs);

	// divide vector into two vectors: S contains the larger elements (sorted), pend contains the smaller elements (unsorted)
	std::vector<int>	S;
	std::vector<int>	pend;
	for (vec_pair::iterator it = pairs.begin(); it != pairs.end(); it++)
	{
		pend.push_back(it->first);
		S.push_back(it->second);
	}

	// insert the first element of pend at the beginning of S (next to its original paired element)
	S.insert(S.begin(), *pend.begin());
	pend.erase(pend.begin());

	// insert each element of pend into S using binary search
	std::vector<int>::iterator it = pend.begin();
	while (it != pend.end())
	{
		binary_search_insert(S, *it);
		it = pend.erase(it);
	}

	//insert the 'straggler' into the sorted sequence at the end
	if (odd != -1)
		binary_search_insert(S, odd);

	return (S);
}

PmergeMe::PmergeMe(const PmergeMe &other) { *this = other; }

PmergeMe::~PmergeMe(void) {}

PmergeMe	&PmergeMe::operator=(const PmergeMe &other)
{
	if (this != &other)
	{
		_nums_vec = other._nums_vec;
		_nums_deque = other._nums_deque;
		_original_sequence = other._original_sequence;
	}
	return (*this);
}

std::vector<int>	PmergeMe::get_original(void)
{
	return (_original_sequence);
}