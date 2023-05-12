/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btenzlin <btenzlin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 11:10:04 by btenzlin          #+#    #+#             */
/*   Updated: 2023/05/12 12:16:50 by btenzlin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <map>
# include <sstream>
# include <fstream>
# include <iostream>
# include <algorithm>

class BitcoinExchange {

public:

	BitcoinExchange(void);
	BitcoinExchange(std::string path);
	BitcoinExchange(const BitcoinExchange &other);
	~BitcoinExchange(void);

	BitcoinExchange					&operator=(const BitcoinExchange &other);

	void							calc_value(std::string date, int num_date, float value);

	std::map<int, float>	get_data(void);

private:

	std::map<int, float>	data;

};
