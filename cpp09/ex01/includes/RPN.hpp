/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:17:39 by btenzlin          #+#    #+#             */
/*   Updated: 2023/03/06 16:27:31 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <stack>
# include <exception>

# include <iostream>

class RPN {

public:

	RPN(void);
	RPN(std::string expr);
	RPN(const RPN &other);
	~RPN(void);

	RPN					&operator=(const RPN &other);

	int				calculate(void);

private:

	bool				is_operand(char c);

	std::stack<char>	ops;

};
