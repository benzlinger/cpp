/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:16:40 by btenzlin          #+#    #+#             */
/*   Updated: 2022/09/05 18:13:22 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static void	str_to_caps(char *str)
{
	int	i;

	if (str)
	{
		i = 0;
		while (str[i])
		{
			std::cout << (char)toupper(str[i]);
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (argv[i])
		{
			str_to_caps(argv[i]);
			if (argv[i + 1])
				std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
