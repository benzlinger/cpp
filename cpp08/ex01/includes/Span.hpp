/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:39:38 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/31 18:55:06 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <vector>
# include <algorithm>
# include <limits>

class	Span {

public:

	Span(void);
	Span(unsigned int N);
	Span(const Span &other);
	~Span(void);

	Span	&operator=(const Span &other);

	void	addNumber(int num);
	int		shortestSpan(void);
	int		longestSpan(void);

	template<typename T>
	void	addMultiple(T begin, T end)
	{
		T	it = begin;

		while (it != end)
		{
			if (getAmount() > getSize())
				throw TooManyNumbersException();
			addNumber(*it);
			it++;
		}
	}

	std::vector<int>	getVector(void);
	unsigned int		getSize(void);
	unsigned int		getAmount(void);

	class SpanFullException : public std::exception {
		const char	*what() const throw();
	};

	class TooManyNumbersException : public std::exception {
		const char	*what() const throw();
	};

	class TooFewNumbersException : public std::exception {
		const char	*what() const throw();
	};

private:

	unsigned int 		_size;
	unsigned int		_amount_values;
	std::vector<int>	_vec;

};

std::ostream	&operator<<(std::ostream &out, Span &sp);
