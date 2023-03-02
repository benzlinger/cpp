/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:50:01 by btenzlin          #+#    #+#             */
/*   Updated: 2023/03/02 17:33:36 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

static void		exit_msg(std::string msg)
{
	std::cerr << "Error: " << msg << std::endl;
	exit(0);
}

static void		print_log(BitcoinExchange &bit, std::string &date, float &value, size_t &pos)
{
	if (pos == std::string::npos)
		std::cerr << "Error: Bad Format.\t\t=> " << date << std::endl;
	else if ((value < 0 || value > 1000))
		std::cerr << "Error: value out of range.\t=> " << value << std::endl;
	else if (date != "date")
		bit.calc_value(date, value);
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
		if (line.size() == 0)
			continue ;
		size_t		pos = line.find("|");
		std::string	date = line.substr(0, pos - 1);
		float		value = std::atof(line.substr(pos + 1).c_str());
		print_log(bit, date, value, pos);
	}
	return (0);
}
