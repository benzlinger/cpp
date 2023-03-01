/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:50:31 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/31 21:30:07 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span(void) : _size(0), _amount_values(0)
{
}

Span::Span(unsigned int N) : _size(N), _amount_values(0)
{
}

Span::Span(const Span &other)
{
	*this = other;
}

Span::~Span(void)
{
}

Span	&Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_size = other._size;
		_amount_values = other._amount_values;
		_vec.clear();
		_vec = other._vec;
	}
	return (*this);
}

void	Span::addNumber(int num)
{
	if (_amount_values == _size)
		throw SpanFullException();
	_vec.push_back(num);
	_amount_values++;
}

int		Span::shortestSpan(void)
{
	int					shortest = INT_MAX;
	int					temp;
	std::vector<int>	temp_vec;

	if (_amount_values <= 1)
		throw TooFewNumbersException();
	temp_vec = _vec;
	std::sort(temp_vec.begin(), temp_vec.end());
	for(std::vector<int>::iterator it = temp_vec.begin(); it != (temp_vec.end() - 1); it++)
	{
		temp = *(it + 1) - *it;
		if (temp < shortest)
			shortest = temp;
	}
	return (shortest);
}

int		Span::longestSpan(void)
{
	if (_amount_values <= 1)
		throw TooFewNumbersException();
	std::vector<int>::iterator	min = std::min_element(_vec.begin(), _vec.end());
	std::vector<int>::iterator	max = std::max_element(_vec.begin(), _vec.end());
	return (*max - *min);
}

std::vector<int>	Span::getVector(void)
{
	return (_vec);
}

unsigned int		Span::getSize(void)
{
	return (_size);
}

unsigned int		Span::getAmount(void)
{
	return (_amount_values);
}

std::ostream	&operator<<(std::ostream &out, Span &sp)
{
	std::vector<int>	vec = sp.getVector();

	for(std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
	{
		out << *it;
		if (it != (vec.end() - 1))
			out << ", ";
	}
	out << std::endl;
	return (out);
}

const char* Span::SpanFullException::what() const throw()
{
	return("Span full");
}

const char* Span::TooManyNumbersException::what() const throw()
{
	return("Amount of numbers too add exceeds size of Span");
}

const char* Span::TooFewNumbersException::what() const throw()
{
	return("Not enough numbers in Span");
}
