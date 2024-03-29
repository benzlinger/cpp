/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:17:39 by btenzlin          #+#    #+#             */
/*   Updated: 2023/05/13 12:09:19 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <stack>
# include <exception>

# include <iostream>
# include <algorithm>

class RPN {

public:

	RPN(void);
	RPN(std::string expr);
	RPN(const RPN &other);
	~RPN(void);

	RPN					&operator=(const RPN &other);

	void				exec_rpn(void);

private:

	float				calculate(void);
	bool				is_operand(char c);
	bool				check_syntax(std::string expr);

	std::stack<char>	ops;

};
