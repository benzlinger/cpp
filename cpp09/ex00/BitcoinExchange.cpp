/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:10:00 by btenzlin          #+#    #+#             */
/*   Updated: 2023/03/02 17:28:29 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {}

BitcoinExchange::BitcoinExchange(std::string path)
{
	std::fstream		csv(path);
	std::stringstream	buf;
	std::string			row;
	std::string			seq;
	std::string			date;
	float				value;

	if (!csv.is_open())
	{
		std::cerr << "Error: Invalid csv file." << std::endl;
		exit(0);
	}
	buf << csv.rdbuf();
	while (std::getline(buf, row))
	{
		std::stringstream s(row);
		int i = 0;
		while (std::getline(s, seq, ','))
		{
			if (i == 0)
				date = seq;
			else if (i == 1)
				value = std::atof(seq.c_str());
			i++;
		}
		data.insert(std::pair<std::string, float> (date, value));
	}
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) { *this = other; }

BitcoinExchange::~BitcoinExchange(void) {}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
		data = other.data;
	return (*this);
}

void							BitcoinExchange::calc_value(std::string date, float value)
{
	std::map<std::string, float>::iterator	it;

	it = data.find(date);
	if (it != data.end())
		std::cout << date << " => " << value << " = " << (value * it->second) << std::endl;
	else
		std::cout << "Error: bad input.\t\t=> " << date << std::endl;
}

std::map<std::string, float>	BitcoinExchange::get_data(void)
{
	return (data);
}
