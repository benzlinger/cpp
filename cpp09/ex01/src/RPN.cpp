/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:18:54 by btenzlin          #+#    #+#             */
/*   Updated: 2023/03/06 16:35:38 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

RPN::RPN(void) {}

RPN::RPN(std::string expr)
{
	for (size_t i = 0; i < expr.size(); i++)
	{
		if (expr[i] == ' ')
			continue ;
		else if (isdigit(expr[i]) || is_operand(expr[i]))
			ops.push(expr[i]);
		else
			throw std::invalid_argument("Invalid syntax.");
	}
}

RPN::RPN(const RPN &other) { *this = other; }

RPN::~RPN(void) {}

RPN		&RPN::operator=(const RPN &other)
{
	if (this != &other)
		ops = other.ops;
	return (*this);
}

int	RPN::calculate(void)
{
	char c = ops.top();
	ops.pop();
	if (is_operand(c))
	{
		int num2 = calculate();
		int num1 = calculate();
		if (c == '+')
			return (num1 + num2);
		else if (c == '-')
			return (num1 - num2);
		else if (c == '*')
			return (num1 * num2);
		else
			return (num1 / num2);
	}
	else
		return (c - '0');
}

bool	RPN::is_operand(char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/');
}
