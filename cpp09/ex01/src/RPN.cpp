/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:18:54 by btenzlin          #+#    #+#             */
/*   Updated: 2023/05/13 13:28:17 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

RPN::RPN(void) {}

RPN::RPN(std::string expr)
{
	int		nums = 0;
	int		opers = 0;

	expr.erase(std::remove(expr.begin(), expr.end(), ' '), expr.end());
	for (size_t i = 0; i < expr.size(); i++)
	{
		if (std::isdigit(expr[i]))
		{
			ops.push(expr[i]);
			nums++;
		}
		else if (is_operand(expr[i]))
		{
			ops.push(expr[i]);
			opers++;
		}
		else
			throw std::invalid_argument("Invalid syntax.");
	}
	if (nums != (opers + 1) || !check_syntax(expr))
		throw std::invalid_argument("Invalid syntax.");
}

RPN::RPN(const RPN &other) { *this = other; }

RPN::~RPN(void) {}

RPN		&RPN::operator=(const RPN &other)
{
	if (this != &other)
		ops = other.ops;
	return (*this);
}

void	RPN::exec_rpn(void)
{
	float	num = calculate();

	if (ops.size())
		throw std::invalid_argument("Invalid syntax.");
	else
		std::cout << num << std::endl;
}

float	RPN::calculate(void)
{
	char c = ops.top();
	ops.pop();
	if (is_operand(c))
	{
		float num2 = calculate();
		float num1 = calculate();
		if (c == '+')
			return (num1 + num2);
		else if (c == '-')
			return (num1 - num2);
		else if (c == '*')
			return (num1 * num2);
		else
		{
			if (num2 == 0)
				throw std::invalid_argument("Division by zero.");
			return (num1 / num2);
		}
	}
	else
		return (c - '0');
}

bool	RPN::is_operand(char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

bool	RPN::check_syntax(std::string expr)
{
	size_t	pos;

	// std::cout << expr << std::endl;
	for (pos = 0; pos < expr.size(); pos++)
		if (is_operand(expr[pos]))
			break ;
	for ( ; pos < expr.size(); pos++)
		if (!is_operand(expr[pos]))
			break ;
	if (pos == expr.size())
		return (true);
	if (!std::isdigit(expr[0]) || !std::isdigit(expr[1]))
		return (false);
	return (true);
}
