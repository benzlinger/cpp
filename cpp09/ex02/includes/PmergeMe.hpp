/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:25:08 by btenzlin          #+#    #+#             */
/*   Updated: 2023/03/07 18:38:14 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <vector>

class PmergeMe {

public:

	PmergeMe(void);
	PmergeMe(char **nums, int size);
	PmergeMe(const PmergeMe &other);
	~PmergeMe(void);

	PmergeMe	&operator=(const PmergeMe &other);

private:

	std::vector<int> _nums_vec;

};
