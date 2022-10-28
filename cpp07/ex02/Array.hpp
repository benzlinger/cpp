/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:17:08 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/28 14:14:14 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
#include <stdexcept>

template <class T>
class	Array{

public:

	Array(void) : _arr(NULL), _size(0) {}
	Array(unsigned int n) : _arr(new T[n]), _size(n) {}
	Array(const Array<T> &other) : _arr(NULL), _size(0) { *this = other; }
	~Array(void) { std::cout << "Destructor called" << std::endl; delete[] _arr; }

	Array	&operator=(const Array<T> &other) {
		if (this != &other)
		{
			if (_size)
				delete[] _arr;
			_arr = new T[other._size];
			_size = other._size;
			for (unsigned int i = 0; i < _size; i++)
				_arr[i] = other._arr[i];
		}
		return (*this);
	}

	T		&operator[](int i) {
		if (i < 0 || (unsigned int)i >= _size)
			throw std::out_of_range("index out of bounds");
		return (_arr[i]);
	}

	void			printArray(std::ostream &out) const {
		if (!_size)
			out << "Array empty";
		for (unsigned int i = 0; i < _size; i++)
			out << _arr[i] << " ";
		out << std::endl;
	}

	unsigned int	size(void) const { return (_size); }

private:

	T				*_arr;
	unsigned int	_size;

};

template <class T>
std::ostream	&operator<<(std::ostream &out, const Array<T> &arr)
{
	arr.printArray(out);
	return (out);
}

#endif
