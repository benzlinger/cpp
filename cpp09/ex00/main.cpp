/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:50:01 by btenzlin          #+#    #+#             */
/*   Updated: 2023/03/02 16:55:14 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <utility>

static void		exit_msg(std::string msg)
{
	std::cerr << "Error: " << msg << std::endl;
	// system("Leaks btc");
	exit(0);
}

int				main(int argc, char **argv)
{
	std::fstream				input(argv[1]);
	std::stringstream			buf;
	std::string					line;

	if (argc != 2)
		exit_msg("Invalid arguments. [usage: ./btc \'path/to/file\']");
	if (!input.is_open())
		exit_msg("Invalid file.");
	buf << input.rdbuf();
	BitcoinExchange				bit("test.csv");
	while (std::getline(buf, line))
	{
		size_t		pos = line.find("|");
		std::string	date = line.substr(0, pos - 1);
		float		value = std::atof(line.substr(pos + 1).c_str());
		if (pos == std::string::npos)
			std::cerr << "Error: Bad Format. => " << date << std::endl;
		else if ((value < 0 || value > 1000))
			std::cerr << "Error: value not in range 0 - 1000" << std::endl;
		else if (date != "date")
			bit.calc_value(date, value);
	}
	// std::map<std::string, float>	tmp = bit.get_data();
	// for (std::map<std::string, float>::iterator it = tmp.begin(); it != tmp.end(); it++)
	// 	std::cout << it->first << " => " << it->second << std::endl;
	return (0);
}
