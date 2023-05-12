/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:10:00 by btenzlin          #+#    #+#             */
/*   Updated: 2023/05/12 13:54:05 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {}

BitcoinExchange::BitcoinExchange(std::string path)
{
	std::fstream		csv(path);
	std::stringstream	buf;
	std::string			row;
	std::string			seq;
	int					date;
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
			{
				seq.erase(remove(seq.begin(), seq.end(), '-'), seq.end());
				date = std::atoi(seq.c_str());
			}
			else if (i == 1)
				value = std::atof(seq.c_str());
			i++;
		}
		data.insert(std::pair<int, float> (date, value));
	}
	// for (std::map<int, float>::iterator it = data.begin(); it != data.end(); it++)
	// {
	// 	std::cout << "Key: " << it->first << "	Value: " << it->second << std::endl;
	// }
	// std::cout << "--------------------------------------" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) { *this = other; }

BitcoinExchange::~BitcoinExchange(void) {}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &other)
{
	if (this != &other)
		data = other.data;
	return (*this);
}

void							BitcoinExchange::calc_value(std::string date, int num_date, float value)
{
	std::map<int, float>::iterator	it;

	while (num_date <= 20220329 && num_date >= 20090102)
	{
		it = data.find(num_date);
		if (it != data.end())
		{
			std::cout << date << " => " << value << " = " << (value * it->second) << std::endl;
			return ;
		}
		else
			num_date--;
	}
	std::cout << "Error: bad input => " << date << std::endl;
}

std::map<int, float>	BitcoinExchange::get_data(void)
{
	return (data);
}
