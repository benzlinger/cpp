/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:05:45 by btenzlin          #+#    #+#             */
/*   Updated: 2022/10/31 20:57:32 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <string>

int main()
{
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	{
		MutantStack<char>	st;

		for (int i = 0; i < 15; i++)
			st.push(i + 'a');
		MutantStack<char>::iterator it = st.begin();
		MutantStack<char>::iterator ite = st.end();
		std::cout << "MutantStack: ";
		while (it != ite)
		{
			std::cout << *it << ", ";
			it++;
		}
		std::cout << std::endl;
		std::cout << std::endl;
		std::list<char>	list;

		for (int i = 0; i < 15; i++)
			list.push_back(i + 'a');
		std::cout << "List:        ";
		std::list<char>::iterator lit = list.begin();
		while (lit != list.end())
		{
			std::cout << *lit << ", ";
			lit++;
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	{
		MutantStack<std::string>	st;

		for (int i = 0; i < 10; i++)
			st.push("Yo " + std::to_string(i));
		std::cout << "MutantStack: ";
		MutantStack<std::string>::iterator it = st.begin();
		MutantStack<std::string>::iterator ite = st.end();
		while (it != ite)
		{
			std::cout << *it << ", ";
			it++;
		}
		std::cout << std::endl;
		std::cout << std::endl;

		std::list<std::string>	list;
	
		for (int i = 0; i < 10; i++)
			list.push_back("Yo " + std::to_string(i));
		std::cout << "List:        ";
		std::list<std::string>::iterator lit = list.begin();
		while (lit != list.end())
		{
			std::cout << *lit << ", ";
			lit++;
		}
		std::cout << std::endl;
	}
	return (0);
}
