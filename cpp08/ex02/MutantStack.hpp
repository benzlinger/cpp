/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:11:48 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/31 21:33:33 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <stack>
# include <iostream>

template<class T>
class	MutantStack : public std::stack<T> {

public:
	typedef typename std::stack<T>::container_type::iterator 	iterator;

	MutantStack(void) : std::stack<T>() {}
	MutantStack(const MutantStack &other) : std::stack<T>(other) {}
	~MutantStack(void) {}

	MutantStack	&operator=(const MutantStack &other)
	{
		(void)other;
		return (*this);
	}

	iterator	begin(void) { return (std::stack<T>::c.begin()); }

	iterator	end(void) { return (std::stack<T>::c.end()); }


};
