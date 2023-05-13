/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:25:08 by btenzlin          #+#    #+#             */
/*   Updated: 2023/05/13 12:35:33 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <vector>
# include <algorithm>
# include <deque>
# include <ctime>

class PmergeMe {

public:

	typedef	std::vector< std::pair<int, int> >	vec_pair;
	typedef	std::deque< std::pair<int, int> >	deque_pair;

	PmergeMe(void);
	PmergeMe(char **nums, int size);
	PmergeMe(const PmergeMe &other);
	~PmergeMe(void);

	PmergeMe	&operator=(const PmergeMe &other);

	std::vector<int>	sort_vec(void);
	std::deque<int>		sort_deque(void);

	std::vector<int>	get_original(void);

private:

	/* vector sort functions */
	vec_pair			vec_to_pairs(void);
	void				sort_pair_elements(vec_pair &pairs);
	void				sort_pairs(vec_pair &pairs);
	void				binary_search_insert(std::vector<int> &S, int elem);

	/* vector sort functions */
	deque_pair			deque_to_pairs(void);
	void				sort_pair_elements(deque_pair &pairs);
	void				sort_pairs(deque_pair &pairs);
	void				binary_search_insert(std::deque<int> &S, int elem);

	std::vector<int>	_original_sequence;
	std::vector<int>	_nums_vec;
	std::deque<int>		_nums_deque;

};
