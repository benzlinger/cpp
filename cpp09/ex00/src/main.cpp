/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:50:01 by btenzlin          #+#    #+#             */
/*   Updated: 2023/05/12 14:10:37 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

static void			exit_msg(std::string msg)
{
	std::cerr << "Error: " << msg << std::endl;
	exit(0);
}

static void			print_log(BitcoinExchange &bit, std::string &date, int &num_date, float &value, size_t &pos)
{
	if (pos == std::string::npos || !num_date)
		std::cerr << "Error: bad input => " << date << std::endl;
	else if (value < 0)
		std::cerr << "Error: not a positive number." << std::endl;
	else if (value > 1000)
		std::cerr << "Error: too large a number." << std::endl;
	else if (num_date)
		bit.calc_value(date, num_date, value);
}

static std::string	parse_date(std::string date)
{
	std::string	tmp = date;

	if (date.length() == 10)
	{
		int	year = atoi(date.substr(0, 4).c_str());
		int	mon = atoi(date.substr(5, 2).c_str());
		int	day = atoi(date.substr(8, 2).c_str());
		if (year >= 2009 && year <= 2023 && mon >= 1 && mon <= 12 && day >= 1 && day <= 31)
		{
			if ((mon == 4 || mon == 6 || mon == 9 || mon == 11) && day == 31) //months with 30 days
			{
				std::cerr << "Error: bad input => " << date << std::endl;
				return ("error");
			}
			else if (mon == 2) //feb
			{
				if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) //leap year
				{
					if (day > 29)
					{
						std::cerr << "Error: bad input => " << date << std::endl;
						return ("error");
					}
				}
				else if (day > 28) //no leap year
				{
					std::cerr << "Error: bad input => " << date << std::endl;
					return ("error");
				}
			}
		}
		else
		{
			std::cerr << "Error: bad input => " << date << std::endl;
			return ("error");
		}
		// std::cout << year << " " << mon << " " << day << std::endl;
	}
	tmp.erase(remove(tmp.begin(), tmp.end(), '-'), tmp.end());
	return (tmp);
}

int					main(int argc, char **argv)
{
	std::fstream				input(argv[1]);
	std::stringstream			buf;
	std::string					line;

	if (argc != 2)
		exit_msg("Invalid arguments. [usage: ./btc \'path/to/input-file\']");
	if (!input.is_open())
		exit_msg("Invalid file.");
	buf << input.rdbuf();
	BitcoinExchange				bit("data.csv");
	while (std::getline(buf, line))
	{
		line.erase(remove(line.begin(), line.end(), ' '), line.end());
		if (line.size() == 0 || line == "date|value")
			continue ;
		size_t		pos = line.find("|");
		std::string	raw_date = line.substr(0, pos);
		std::string	date = parse_date(raw_date);
		if (date == "error")
			continue ;
		int			num_date = std::atoi(date.c_str());
		float		value = std::atof(line.substr(pos + 1).c_str());
		print_log(bit, raw_date, num_date, value, pos);
	}
	return (0);
}
